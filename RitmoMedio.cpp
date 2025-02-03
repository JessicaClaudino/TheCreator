#include "RitmoMedio.h"
#include "Musica.h"
#include <numeric>

double RitmoMedio::calcularRitmoMedio(const std::vector<Musica*>& musicas) const {
    if (musicas.empty()) return 0.0;

    double totalRitmo = 0.0;
    int numMusicas = 0;
    for (const Musica* musica : musicas) {
        if (musica != nullptr && musica->getRitmo() != nullptr) {
            totalRitmo += musica->getRitmo()->getBpm();
            numMusicas++;
        }

    }

    return (numMusicas > 0) ? totalRitmo / numMusicas : 0.0;
}