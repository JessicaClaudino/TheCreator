#include "NumeroGeneros.h"

using namespace std;

int NumeroGeneros::calcularNumeroGeneros(const vector<Musica>& musicas) {
    set<Genero> generosDistintos; // Use um set para garantir que os generos não se repitam

    for (const auto& musica : musicas) {
      generosDistintos.insert(musica.genero);
    }

    return generosDistintos.size();
}