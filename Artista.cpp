#include "Artista.h"

using namespace std;

Artista::Artista(string nome) : nome(nome) {}

string Artista::getNome() const {
    return nome;
}

void Artista::setNome(const string& nome) {
    this->nome = nome;
}

bool Artista::operator<(const Artista& other) const {
    return nome < other.nome;
}

bool Artista::operator==(const Artista& other) const {
    return nome == other.nome;
}

bool Artista::operator!=(const Artista& other) const { // Implementação do operador !=
    return nome != other.nome;
}