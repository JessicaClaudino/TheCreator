#include "Ritmo.h"
#include "Musica.h" // usando musica.h de uma vez

Ritmo::Ritmo(int bpm) : bpm(bpm) {}

int Ritmo::getBpm() const {
  return bpm;
}

void Ritmo::setBpm(int bpm) {
  this->bpm = bpm;
}

int Ritmo::calcularBPMEspecifico(const std::vector<Musica*> &musicas, const std::string &nomeMusica) {
int soma = 0;
    for (const Musica* musica : musicas){
        if (musica->getNome() == nomeMusica){
            soma += musica->getBpm();
        }
    }
    return soma;
}
