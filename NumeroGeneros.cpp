#include "NumeroGeneros.h"
#include <set>
#include <iostream>

using namespace std;

int NumeroGeneros::calcularNumeroGeneros(const std::vector<Musica*>& musicas) const {
    std::set<std::string> generosUnicos; 
    for (const Musica* musica : musicas) {
        if (musica != nullptr) {
            const Genero* genero = musica->getGenero();
            if (genero != nullptr) {
                generosUnicos.insert(genero->getNome());
            }
        }
    }
    return generosUnicos.size();
}
