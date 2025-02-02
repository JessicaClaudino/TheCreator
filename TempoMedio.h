#pragma once
 #include <vector>
  #include "Musica.h"

class TempoMedio {
public:
     double calcularTempoMedio(const std::vector<Musica*>& musicas) const;
};
