#include "Usuario.h"
#include <iostream> // Incluímos iostream para cout e endl

using namespace std;

Usuario::Usuario(string nome) : nome(nome) {}

string Usuario::getNome() const {
    return nome;
}

void Usuario::setNome(const string& nome) {
    this->nome = nome;
}

void Usuario::adicionarMusicaFavorita(const Musica& musica) {
    musicasFavoritas.push_back(musica);
}

vector<Musica> Usuario::listarMusicasFavoritas() const {
    return musicasFavoritas;
}
