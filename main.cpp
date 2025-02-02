#include "InterfaceUsuario.h"
#include "Musica.h"
#include "Usuario.h"
#include "Artista.h"
#include "Genero.h"
#include "Idioma.h"
#include "Ritmo.h"
#include "Tempo.h"
#include <iostream>
#include <vector>
#include <sstream>

int main() {
    InterfaceUsuario interfaceUsuario;
    std::string nomeUsuario;

    std::cout << "Bem-vindo ao The Creator!" << std::endl;
    std::cout << "Insira seu nome: ";
    std::getline(std::cin, nomeUsuario);

    Usuario usuario(nomeUsuario);
    std::cout << "Olá " << usuario.getNome() << "!" << std::endl;

    std::cout << "\nO programa irá procurar um arquivo 'musicas.csv' no mesmo diretório do executável." << std::endl;
    std::cout << "Se o arquivo existir, as músicas nele contidas serão carregadas." << std::endl;
    std::cout << "Caso contrário, um novo arquivo 'musicas.csv' será criado ao final da execução com as novas músicas inseridas." << std::endl;
    std::cout << "Por favor, certifique-se de que o arquivo 'musicas.csv' (se existir) está corretamente formatado." << std::endl;

    interfaceUsuario.carregarMusicasDeCSV("musicas.csv");
    
    int escolha;
    
    
      std::cout << "\nAgora, insira os dados de três músicas:" << std::endl;
        for (int i = 0; i < 3; ++i) {
             std::string nomeMusica, nomeArtista, nomeGenero, nomeIdioma, ritmoStr, tempoStr;
            std::cout << "\n--- Música " << i + 1 << " ---" << std::endl;
             std::cout << "Insira o nome da música: ";
             std::getline(std::cin, nomeMusica);

            std::cout << "Insira o nome do artista: ";
             std::getline(std::cin, nomeArtista);

             std::cout << "Insira o gênero da música: ";
            std::getline(std::cin, nomeGenero);

            std::cout << "Insira o ritmo da música (BPM): ";
            std::getline(std::cin, ritmoStr);

            std::cout << "Insira o idioma da música: ";
             std::getline(std::cin, nomeIdioma);

            std::cout << "Insira o tempo da música (min:seg): ";
             std::getline(std::cin, tempoStr);

             Artista* artista = new Artista(nomeArtista);
            Genero* genero = new Genero(nomeGenero);
             Idioma* idioma = new Idioma(nomeIdioma);
            Ritmo* ritmo = new Ritmo(std::stoi(ritmoStr));
             Tempo* tempo = new Tempo(tempoStr);

            Musica* musica = new Musica(nomeMusica, artista, genero, ritmo, idioma, tempo);
            interfaceUsuario.adicionarMusica(musica);
         }
      do {
            std::cout << "\n--- Menu de Opções ---" << std::endl;
            std::cout << "Escolha uma ou mais opções separadas por espaço (ex: '1 3 5') e pressione Enter:" << std::endl;
             std::cout << "1. Ver número de gêneros diferentes" << std::endl;
            std::cout << "2. Ver número de artistas diferentes" << std::endl;
            std::cout << "3. Ver ritmo médio das músicas" << std::endl;
             std::cout << "4. Ver tempo médio das músicas" << std::endl;
            std::cout << "5. Ver número de idiomas diferentes" << std::endl;
             std::cout << "6. Ver todas as opções" << std::endl;
             std::cout << "0. Sair" << std::endl;
            std::cout << "Opção(ões): ";

           std::string input;
             std::getline(std::cin, input);
            std::stringstream ss(input);
             while (ss >> escolha) {
                switch (escolha) {
                    case 1:
                        std::cout << "Número de gêneros diferentes: " << interfaceUsuario.getNumeroGeneros() << std::endl;
                        break;
                     case 2:
                        std::cout << "Número de artistas diferentes: " << interfaceUsuario.getNumeroArtistas() << std::endl;
                        break;
                    case 3:
                        std::cout << "Ritmo médio das músicas: " << interfaceUsuario.getRitmoMedio() << std::endl;
                        break;
                     case 4:
                        std::cout << "Tempo médio das músicas: " << interfaceUsuario.getTempoMedio() << std::endl;
                        break;
                    case 5:
                        std::cout << "Número de idiomas diferentes: " << interfaceUsuario.getNumeroIdiomas() << std::endl;
                        break;
                    case 6:
                        interfaceUsuario.exibirInformacoes();
                        break;
                     case 0:
                        std::cout << "Saindo do programa..." << std::endl;
                        break;
                   default:
                        std::cout << "Opção inválida." << std::endl;
                }
            }

        } while (escolha != 0);

    interfaceUsuario.salvarMusicasEmCSV("musicas.csv");
    std::cout << "\nObrigado por usar o The Creator, " << usuario.getNome() << "!" << std::endl;
    return 0;
}
