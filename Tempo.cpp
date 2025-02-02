#include "Tempo.h"
#include <sstream>
#include <iostream>
#include <stdexcept>
Tempo::Tempo() : segundos(0) {}

Tempo::Tempo(int minutos, int segundos) : minutos(minutos), segundos(segundos) {}

Tempo::Tempo(const std::string& tempoStr) {
    std::stringstream ss(tempoStr);
    std::string minutosStr, segundosStr;

    if (std::getline(ss, minutosStr, ':') && std::getline(ss, segundosStr)) {
        try {
             minutos = std::stoi(minutosStr);
            segundos = std::stoi(segundosStr);
            if (minutos < 0 || segundos < 0 || segundos > 59) {
               throw std::invalid_argument("Formato de tempo inválido");
             }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Erro ao converter tempo: " << e.what() << std::endl;
            minutos = 0;
            segundos = 0;
           }
      }
     else{
          std::cerr << "Erro ao converter tempo: formato inválido" << std::endl;
          minutos = 0;
          segundos = 0;
    }
  }

int Tempo::getMinutos() const {
    return minutos;
}

int Tempo::getSegundos() const {
    return segundos;
}
std::string Tempo::getTempoStr() const {
     return std::to_string(minutos) + ":" + (segundos < 10 ? "0" : "") + std::to_string(segundos);
 }
