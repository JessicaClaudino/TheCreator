#pragma once
#include <string>

class Artista {
public:
    Artista(std::string nome);
    std::string getNome() const;
    void setNome(const std::string& nome);
private:
    std::string nome;
};
