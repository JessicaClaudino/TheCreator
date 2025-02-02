#pragma once
#include <string>

using namespace std;

class Genero {
public:
    string nome;

    Genero(string nome);
    Genero() = default;

    string getNome() const;
    void setNome(const string& nome);

    bool operator<(const Genero& other) const;
    bool operator==(const Genero& other) const;
    bool operator!=(const Genero& other) const; // Adicionado o operador !=
};
