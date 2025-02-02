#include "Artista.h"

Artista::Artista(std::string nome) : nome(nome) {}

std::string Artista::getNome() const {
    return nome;
}

void Artista::setNome(const std::string& nome) {
    this->nome = nome;
}