#pragma once
#include <string>

class Tempo {
private:
    int minutos;
    int segundos;

public:
    Tempo();
    Tempo(int minutos, int segundos);
     Tempo(const std::string& tempoStr); // Novo construtor
    int getMinutos() const;
    int getSegundos() const;
    std::string getTempoStr() const; // Novo método
};
