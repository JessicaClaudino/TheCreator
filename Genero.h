#pragma once
#include <string>

class Genero {
public:
    Genero(std::string genero);
    std::string getGenero() const;
    void setGenero(const std::string& genero);
private:
    std::string genero;
};
