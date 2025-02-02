#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "Musica.h"

using namespace std;

class Usuario {
private:
    string nome;
    std::vector<Musica*> musicasFavoritas;

public:
    Usuario(string nome);
    string getNome() const;
    void setMusicasFavoritas(const std::vector<Musica*>& musicas);
     const std::vector<Musica*> &getMusicasFavoritas() const;
};

#endif
