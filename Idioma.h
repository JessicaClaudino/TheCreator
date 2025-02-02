#ifndef IDIOMA_H
#define IDIOMA_H
#include <string>


class Idioma {
private:
    std::string nome; // Adicione std::
public:
    Idioma(std::string nome); // Adicione std::
    std::string getNome() const; // Adicione std::
};

#endif
