#include "NumeroIdioma.h"
#include <set>

int NumeroIdiomas::calcularNumeroIdiomas(const std::vector<Musica*>& musicas) const {
    std::set<std::string> idiomasUnicos;

    for (const Musica* musica : musicas) {
        if (musica != nullptr && musica->getIdioma() != nullptr) {
            idiomasUnicos.insert(musica->getIdioma()->getNome());
        }
    }

    return idiomasUnicos.size();
}
