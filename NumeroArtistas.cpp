#include "NumeroArtistas.h"

using namespace std;

int NumeroArtistas::calcularNumeroArtistas(const vector<Musica>& musicas) {
    set<string> artistasUnicos; // Usa set para garantir artistas únicos

    for (const auto& musica : musicas) {
        artistasUnicos.insert(musica.getArtista());
    }

    return static_cast<int>(artistasUnicos.size());
}