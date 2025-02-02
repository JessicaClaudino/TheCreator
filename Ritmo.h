#pragma once
#include <vector>
#include <string>

class Musica;

class Ritmo {
public:
    Ritmo(int bpm);
    int getBpm() const;
    void setBpm(int bpm);
    static int calcularBPMEspecifico(const std::vector<Musica*> &musicas, const std::string &nomeMusica);
private:
    int bpm;
};