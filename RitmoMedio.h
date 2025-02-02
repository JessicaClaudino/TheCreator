#pragma once
#include <vector>

class Musica;

class RitmoMedio {
public:
    static double calcular(const std::vector<Musica*>& musicas);
};
