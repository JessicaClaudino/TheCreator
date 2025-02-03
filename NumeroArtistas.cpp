#include "NumeroArtistas.h"
#include "Musica.h"
#include <set>

int NumeroArtistas::calcularNumeroArtistas(const std::vector<Musica*>& musicas) const {
    std::set<std::string> artistasUnicos;
    for (const Musica* musica : musicas) {
        if (musica && musica->getArtista()) { // Verifica se o ponteiro e o artista são válidos
            artistasUnicos.insert(musica->getArtista()->getNome()); // Adiciona o artista 
        }
    }
    return artistasUnicos.size();
}
