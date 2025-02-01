#pragma once
#include <vector>
#include <set>
#include "Musica.h" // Inclui Musica.h, pois NumeroArtistas precisa de Musica

using namespace std;

class NumeroArtistas {
public:
    int calcularNumeroArtistas(const vector<Musica>& musicas);
};