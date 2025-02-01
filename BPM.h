#pragma once

#include <vector>
#include <string>
#include "Musica.h"

class BPM {
public:
    static double calcularBPMMedio(const std::vector<Musica>& musicas);
    static int calcularBPMEspecifico(const std::vector<Musica>& musicas, const std::string& nomeMusica);
};
