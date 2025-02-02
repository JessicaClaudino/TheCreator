#include "NumeroArtistas.h"
#include "Musica.h"
#include <set>

int NumeroArtistas::calcularNumeroArtistas(const std::vector<Musica*>& musicas) {
    std::set<std::string> artistasDistintos;
        for (const Musica* musica : musicas) {
           artistasDistintos.insert(musica->artista.getNome());
        }
     return artistasDistintos.size();
}