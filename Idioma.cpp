#include "Idioma.h" // Inclusão do arquivo de cabeçalho Idioma.h
#include <iostream> 

using namespace std;

Idioma::Idioma(string nome) : nome(nome) {} // Construtor da classe Idioma

string Idioma::getNome() const { 
    return nome; // Retorna o nome do idioma
}

void Idioma::setNome(const string& nome) {
    this->nome = nome; // Atribui um novo nome ao idioma
}

bool Idioma::operator<(const Idioma& other) const {
    return nome < other.nome; 
}

bool Idioma::operator==(const Idioma& other) const {
    return nome == other.nome;
}

bool Idioma::operator!=(const Idioma& other) const { 
    return nome != other.nome;
}

