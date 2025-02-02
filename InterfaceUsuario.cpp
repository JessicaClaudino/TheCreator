#include "InterfaceUsuario.h"
#include "Musica.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

InterfaceUsuario::InterfaceUsuario() {}

void InterfaceUsuario::exibirInformacoes() {
    std::cout << "Número de gêneros diferentes: " << getNumeroGeneros() << std::endl;
    std::cout << "Número de artistas diferentes: " << getNumeroArtistas() << std::endl;
    std::cout << "Ritmo médio das músicas: " << getRitmoMedio() << std::endl;
    std::cout << "Tempo médio das músicas: " << getTempoMedio() << std::endl;
    std::cout << "Número de idiomas diferentes: " << getNumeroIdiomas() << std::endl;
}

void InterfaceUsuario::adicionarMusica(Musica* musica) {
    musicas.push_back(musica);
}

void InterfaceUsuario::salvarMusicasEmCSV(const std::string& filename) {
    GerenciadorCSV::salvarMusicas(musicas, filename);
}

void InterfaceUsuario::carregarMusicasDeCSV(const std::string& filename) {
    std::cout << "Tentando abrir arquivo: " << filename << std::endl;
    std::ifstream file(filename);
    if (file.is_open()) {
        std::cout << "Arquivo " << filename << " aberto com sucesso." << std::endl;
        std::string line;
        std::getline(file, line); // Lê o cabeçalho
        std::cout << "Cabeçalho: " << line << std::endl;
        while (std::getline(file, line)) {
            std::cout << "Lendo linha: " << line << std::endl;
            try {
                Musica musica = Musica::fromCSVString(line);
                adicionarMusica(new Musica(musica));
           }
            catch(const std::exception& e){
                 std::cerr << "Erro ao ler musica do csv: " << e.what() << std::endl;
            }
        }
        file.close();
        std::cout << "Músicas carregadas com sucesso de " << filename << std::endl;
    } else {
        std::cerr << "Erro ao abrir o arquivo para carregar: " << filename << std::endl;
    }
}


int InterfaceUsuario::getNumeroGeneros() const {
    return numeroGeneros.calcularNumeroGeneros(musicas);
}

int InterfaceUsuario::getNumeroArtistas() const {
    return numeroArtistas.calcularNumeroArtistas(musicas);
}

double InterfaceUsuario::getRitmoMedio() const {
    return ritmoMedio.calcularRitmoMedio(musicas);
}

double InterfaceUsuario::getTempoMedio() const {
    return tempoMedio.calcularTempoMedio(musicas);
}

int InterfaceUsuario::getNumeroIdiomas() const {
    return numeroIdiomas.calcularNumeroIdiomas(musicas);
}
