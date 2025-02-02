#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

class Tempo {
private:
    int minutos;
    int segundos;

public:
    Tempo(int minutos, int segundos);
    Tempo(); // Construtor padrão

    int getMinutos() const;
    int getSegundos() const;

    void setMinutos(int minutos);
    void setSegundos(int segundos);
    
    std::string toString() const;

    bool operator<(const Tempo& other) const;
    bool operator==(const Tempo& other) const;
};
