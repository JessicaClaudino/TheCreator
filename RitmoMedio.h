#pragma once
#include <vector>
#include "Musica.h"

class RitmoMedio {
public:
    double calcularRitmoMedio(const std::vector<Musica*>& musicas) const;
};