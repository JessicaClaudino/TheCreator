#include "TempoMedio.h"
#include "Musica.h"
#include <vector>
#include <numeric>

double TempoMedio::calcular(const std::vector<Musica*>& musicas) {
    if (musicas.empty()) {
        return 0.0;
    }
    double soma = 0;
     for (const Musica* musica : musicas) {
        soma += std::stod(musica->getTempo()->toString());
    }
    return soma / musicas.size();
}
