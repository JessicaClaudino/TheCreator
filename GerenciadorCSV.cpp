#include "GerenciadorCSV.h"
#include <iostream>
#include <fstream>
#include <sstream>

std::vector<Musica*> GerenciadorCSV::carregarMusicas(const std::string& filename) {
    std::vector<Musica*> musicas;
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        // Ignora o cabeçalho
         std::getline(file, line);
        while (std::getline(file, line)) {
           Musica musica = Musica::fromCSVString(line);
            musicas.push_back(new Musica(musica));
        }
        file.close();
         std::cout << "Músicas carregadas de " << filename << std::endl;
    } else {
        std::cerr << "Erro ao abrir o arquivo para carregar." << std::endl;
    }
    return musicas;
}

void GerenciadorCSV::salvarMusicas(const std::vector<Musica*>& musicas, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
       file << "Nome,Artista,Genero,Ritmo,Idioma,Tempo\n";
        for (const Musica* musica : musicas) {
            file << musica->toCSVString() << "\n";
        }
        file.close();
       std::cout << "Músicas salvas em " << filename << std::endl;
    } else {
        std::cerr << "Erro ao abrir o arquivo para salvar." << std::endl;
    }
}
