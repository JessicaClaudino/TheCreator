#pragma once
#include <string>
#include <vector>
#include "Musica.h"

using namespace std;

class Usuario {
public:
    string nome;
    vector<Musica> musicasFavoritas;

    Usuario(string nome);
    Usuario() = default;

    string getNome() const;
    void setNome(const string& nome);
    
    void adicionarMusicaFavorita(const Musica& musica);
    vector<Musica> listarMusicasFavoritas() const;
};
