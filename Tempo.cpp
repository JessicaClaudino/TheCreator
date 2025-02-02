#include "tempo.h"
#include <iomanip>
#include <sstream>

Tempo::Tempo(int minutos, int segundos) {
    this->minutos = minutos;
    this->segundos = segundos;
}

Tempo::Tempo() : minutos(0), segundos(0) {}

int Tempo::getMinutos() const {
    return minutos;
}

int Tempo::getSegundos() const {
    return segundos;
}

void Tempo::setMinutos(int minutos) {
    this->minutos = minutos;
}

void Tempo::setSegundos(int segundos) {
    this->segundos = segundos;
}

string Tempo::toString() const {
    stringstream ss;
    ss << minutos << ":" << setw(2) << setfill('0') << segundos;
    return ss.str();
}

bool Tempo::operator<(const Tempo& other) const {
    return (minutos * 60 + segundos) < (other.minutos * 60 + other.segundos);
}

bool Tempo::operator==(const Tempo& other) const {
    return (minutos == other.minutos) && (segundos == other.segundos);
}
