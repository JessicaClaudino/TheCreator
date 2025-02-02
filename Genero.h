#pragma once 

#include <string>

class Genero {
public:
    std::string nome; 

    Genero(std::string nome);
    Genero() = default;

    std::string getNome() const;
    void setNome(const std::string& nome); 

    bool operator<(const Genero& other) const;
    bool operator==(const Genero& other) const;
    bool operator!=(const Genero& other) const;
};
