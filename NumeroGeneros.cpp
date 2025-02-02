#include "NumeroGeneros.h"
#include "Musica.h"
#include <set>

int NumeroGeneros::calcularNumeroGeneros(const std::vector<Musica*>& musicas) {
    std::set<std::string> generosDistintos;
    for (const Musica* musica : musicas) {
       generosDistintos.insert(musica->getGenero().getGenero());
    }
    return generosDistintos.size();
}
