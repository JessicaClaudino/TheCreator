#include "Genero.h"

Genero::Genero(std::string genero) : genero(genero) {}

std::string Genero::getGenero() const {
    return genero;
}

void Genero::setGenero(const std::string& genero) {
    this->genero = genero;
}
