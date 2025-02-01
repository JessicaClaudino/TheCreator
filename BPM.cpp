#include "BPM.h"

double BPM::calcularBPMMedio(const std::vector<Musica>& musicas) {
    if (musicas.empty()) return 0.0;
    
    int soma = 0;
    for (const auto& musica : musicas) {
        soma += musica.getBpm();
    }
    
    return static_cast<double>(soma) / musicas.size();
}

int BPM::calcularBPMEspecifico(const std::vector<Musica>& musicas, const std::string& nomeMusica) {
    for (const auto& musica : musicas) {
        if (musica.getNome() == nomeMusica) {
            return musica.getBpm();
        }
    }
    return -1; // Indica que a música não foi encontrada
}