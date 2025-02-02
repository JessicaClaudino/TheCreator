#include "InterfaceUsuario.h"
#include "Musica.h"
#include "Artista.h"
#include "Genero.h"
#include "Ritmo.h"
#include "Idioma.h"
#include "Tempo.h"
#include <limits>
#include <sstream> // Para usar std::istringstream

void InterfaceUsuario::exibirMenu() {
    std::cout << "\nOpções de análise:" << std::endl;
    std::cout << "1. Ver número de gêneros diferentes" << std::endl;
    std::cout << "2. Ver número de artistas diferentes" << std::endl;
    std::cout << "3. Ver ritmo médio das músicas" << std::endl;
    std::cout << "4. Ver tempo médio das músicas" << std::endl;
    std::cout << "5. Ver número de idiomas diferentes" << std::endl;
    std::cout << "6. Ver todas as opções" << std::endl;
    std::cout << "0. Sair" << std::endl;
    std::cout << "Digite o número da(s) opção(ões) desejada(s), separadas por espaço: ";
}

void InterfaceUsuario::executarOpcao(const std::vector<int>& opcoes, const Usuario& usuario) {
    for (int opcao : opcoes) {
          switch (opcao) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                exibirResultados(usuario, opcoes);
                break;
            case 0:
                std::cout << "Saindo do sistema..." << std::endl;
                 break;
            default:
                std::cout << "Opção inválida!" << std::endl;
                 break;
            }
          if(opcao == 0) break; //Se o usuário selecionar a opção 0, sai do loop.
    }
}

std::string InterfaceUsuario::obterNomeUsuario() {
    std::string nome;
    std::cout << "Por favor, digite seu nome: ";
    std::getline(std::cin >> std::ws, nome);
    return nome;
}

Musica* InterfaceUsuario::obterMusica() {
    std::string nomeMusica, nomeArtista, nomeGenero, nomeIdioma, tempoStr;
    int bpm;

    std::cout << "Digite o nome da música: ";
    std::getline(std::cin >> std::ws, nomeMusica);

    std::cout << "Digite o nome do artista: ";
    std::getline(std::cin >> std::ws, nomeArtista);

    std::cout << "Digite o gênero da música: ";
    std::getline(std::cin >> std::ws, nomeGenero);

    std::cout << "Digite o BPM da música: ";
    while (!(std::cin >> bpm)) {
        std::cout << "Entrada inválida. Digite um número inteiro para o BPM: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    std::cout << "Digite o idioma da música: ";
    std::getline(std::cin >> std::ws, nomeIdioma);

    std::cout << "Digite o tempo da música (min:seg): ";
    std::getline(std::cin >> std::ws, tempoStr);


    Artista* artista = new Artista(nomeArtista);
    Genero* genero = new Genero(nomeGenero); // Use ponteiro para Genero
    Ritmo* ritmo = new Ritmo(bpm);
    Idioma* idioma = new Idioma(nomeIdioma); // Use ponteiro para Idioma

    int minutos = std::stoi(tempoStr.substr(0, tempoStr.find(':')));
    int segundos = std::stoi(tempoStr.substr(tempoStr.find(':') + 1));
    Tempo* tempo = new Tempo(minutos, segundos);

    return new Musica(nomeMusica, artista, genero, ritmo, idioma, tempo);
}

std::vector<Musica*> InterfaceUsuario::obterMusicas(int numMusicas) {
   std::vector<Musica*> musicas;
    for (int i = 0; i < numMusicas; ++i) {
        std::cout << "\nInserindo dados da música " << i + 1 << ":" << std::endl;
        Musica* musica = obterMusica();
        ritmoMedio.adicionarRitmo(*musica->getRitmo());
        tempoMedio.adicionarTempo(*musica->getTempo());
        musicas.push_back(musica);
    }
    return musicas;
}

void InterfaceUsuario::exibirResultados(const Usuario& usuario, const std::vector<int>& opcoes) {
    std::cout << "\nResultados para o usuário " << usuario.getNome() << ":" << std::endl;

    const std::vector<Musica*> musicas = usuario.getMusicasFavoritas();

    for(int opcao : opcoes){
        switch (opcao) {
            case 1:
               std::cout << "Número de gêneros diferentes: " << numeroGeneros.calcularNumeroGeneros(musicas) << std::endl;
                break;
            case 2:
               std::cout << "Número de artistas diferentes: " << numeroArtistas.calcularNumeroArtistas(musicas) << std::endl;
                break;
            case 3: {
                 try {
                        double ritmoMedioCalculado = ritmoMedio.calcularRitmoMedio();
                       std::cout << "Ritmo médio das músicas: " << ritmoMedioCalculado << " BPM" << std::endl;
                 } catch (const std::invalid_argument& e) {
                        std::cerr << "Erro ao calcular ritmo médio: " << e.what() << std::endl;
                 }
                  break;
               }
            case 4: {
                try {
                    double tempoMedioCalculado = tempoMedio.calcularTempoMedio();
                   std::cout << "Tempo médio das músicas: " << tempoMedioCalculado << " segundos." << std::endl;
                } catch (const std::invalid_argument& e) {
                  std::cerr << "Erro ao calcular tempo médio: " << e.what() << std::endl;
              }
               break;
             }
            case 5:
               std::cout << "Número de idiomas diferentes: " << numeroIdiomas.calcularNumeroIdiomas(musicas) << std::endl;
              break;
            case 6:
               std::cout << "Número de gêneros diferentes: " << numeroGeneros.calcularNumeroGeneros(musicas) << std::endl;
                std::cout << "Número de artistas diferentes: " << numeroArtistas.calcularNumeroArtistas(musicas) << std::endl;
                try {
                       double ritmoMedioCalculado = ritmoMedio.calcularRitmoMedio();
                       std::cout << "Ritmo médio das músicas: " << ritmoMedioCalculado << " BPM" << std::endl;
                 } catch (const std::invalid_argument& e) {
                    std::cerr << "Erro ao calcular ritmo médio: " << e.what() << std::endl;
                  }
                try {
                      double tempoMedioCalculado = tempoMedio.calcularTempoMedio();
                    std::cout << "Tempo médio das músicas: " << tempoMedioCalculado << " segundos." << std::endl;
                } catch (const std::invalid_argument& e) {
                   std::cerr << "Erro ao calcular tempo médio: " << e.what() << std::endl;
                 }
               std::cout << "Número de idiomas diferentes: " << numeroIdiomas.calcularNumeroIdiomas(musicas) << std::endl;
                 break;
            }
    }
}
