#include "Genero.h"

using namespace std;

Genero::Genero(string nome) : nome(nome) {}

string Genero::getNome() const {
    return nome;
}

void Genero::setNome(const string& nome) {
    this->nome = nome;
}

bool Genero::operator<(const Genero& other) const {
    return nome < other.nome;
}

bool Genero::operator==(const Genero& other) const {
    return nome == other.nome;
}

bool Genero::operator!=(const Genero& other) const { // Implementação do operador !=
    return nome != other.nome;
}
