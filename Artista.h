#pragma once
#include <string>

using namespace std;

class Artista {
public:
    string nome;

    Artista(string nome);
    Artista() = default;

    string getNome() const;
    void setNome(const string& nome);

    bool operator<(const Artista& other) const;
    bool operator==(const Artista& other) const;
    bool operator!=(const Artista& other) const; // Adicionado o operador !=
};