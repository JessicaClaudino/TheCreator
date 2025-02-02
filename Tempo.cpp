#include "Tempo.h"
#include <stdexcept>
#include <sstream>
#include <iomanip>


Tempo::Tempo(int minutos, int segundos) {
    if (minutos < 0 || segundos < 0 || segundos > 59) {
        throw std::invalid_argument("Invalid time values");
    }
    this->minutos = minutos;
    this->segundos = segundos;
}

Tempo::Tempo() : minutos(0), segundos(0) {} // Construtor padrão

int Tempo::getMinutos() const {
    return minutos;
}

int Tempo::getSegundos() const {
    return segundos;
}

void Tempo::setMinutos(int minutos) {
    if (minutos < 0) {
        throw std::invalid_argument("Invalid minute value");
    }
    this->minutos = minutos;
}

void Tempo::setSegundos(int segundos) {
    if (segundos < 0 || segundos > 59) {
        throw std::invalid_argument("Invalid second value");
    }
    this->segundos = segundos;
}

std::string Tempo::toString() const {
    std::stringstream ss;
    ss << std::setfill('0') << std::setw(2) << minutos << ":" << std::setfill('0') << std::setw(2) << segundos;
    return ss.str();
}

bool Tempo::operator<(const Tempo& other) const {
    if (minutos < other.minutos) {
        return true;
    } else if (minutos == other.minutos) {
        return segundos < other.segundos;
    }
    return false;
}

bool Tempo::operator==(const Tempo& other) const {
    return minutos == other.minutos && segundos == other.segundos;
}
