#pragma once
#include <vector>
#include <set>
#include "Musica.h" // Inclui Musica.h, pois NumeroGeneros precisa de Musica
#include "Genero.h" // Inclui Genero.h, pois NumeroGeneros precisa de Genero

using namespace std;

class NumeroGeneros {
public:
    int calcularNumeroGeneros(const vector<Musica>& musicas);
};
