#pragma once
#include <vector>
#include "Musica.h"

class Musica;
class TempoMedio {
public:
  static double calcular(const std::vector<Musica*> &musicas);
};
