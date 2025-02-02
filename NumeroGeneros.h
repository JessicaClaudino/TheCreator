#ifndef NUMEROGENEROS_H
#define NUMEROGENEROS_H

#include <vector>
#include <set>
#include "Musica.h"

class NumeroGeneros {
public:
    int calcularNumeroGeneros(const std::vector<Musica*>& musicas) const;
};

#endif
