#include "Usuario.h"
#include <string> // para usar std::string
#include "Musica.h" 


Usuario::Usuario(std::string nome) : nome(nome) {} 

std::string Usuario::getNome() const { return nome; } 

void Usuario::setMusicasFavoritas(const std::vector<Musica*>& musicas) {
    this->musicasFavoritas = musicas;
}

const std::vector<Musica*>& Usuario::getMusicasFavoritas() const {
    return musicasFavoritas;
}

void Usuario::adicionarMusica(Musica* musica) {
    musicasFavoritas.push_back(musica);
}
