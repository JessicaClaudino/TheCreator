#include "TempoMedio.h"

Tempo TempoMedio::calcularMedia(const vector<Tempo>& tempos) {
    if (tempos.empty()) {
        return Tempo(0, 0);
    }

    int totalSegundos = 0;
    for (const auto& tempo : tempos) {
        totalSegundos += tempo.getMinutos() * 60 + tempo.getSegundos();
    }

    int mediaSegundos = totalSegundos / tempos.size();
    return Tempo(mediaSegundos / 60, mediaSegundos % 60);
}
