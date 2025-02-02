    #include "Idioma.h"
    #include <string>

    Idioma::Idioma(std::string nome) : nome(nome) {}

   std::string Idioma::getNome() const {
       return nome;
    }
