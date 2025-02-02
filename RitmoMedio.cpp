#include "RitmoMedio.h"
#include "Musica.h"
#include <vector>
#include <numeric>

double RitmoMedio::calcular(const std::vector<Musica*>& musicas) {
    if (musicas.empty()) {
        return 0.0;
    }
   double soma = 0;
   for(const Musica* musica : musicas) {
       soma += musica->getBpm();
    }
   return soma / musicas.size();
}