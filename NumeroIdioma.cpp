#include "NumeroIdioma.h"

using namespace std;

int NumeroIdioma::calcularNumeroIdioma(const vector<Musica>& musicas) {
    set<string> idiomaEspecifico; 

    for (const auto& musica : musicas) {
        idiomaEspecifico.insert(musica.getIdioma());
    }

    return static_cast<int>(idiomaEspecifico.size());
}