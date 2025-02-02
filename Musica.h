#ifndef MUSICA_H
#define MUSICA_H

#include <string>
#include "Genero.h"
#include "Artista.h"
#include "Ritmo.h"
#include "Idioma.h"
#include "Tempo.h"

using namespace std;

class Musica {
private:
    string nome;
    Artista* artista;
    Genero* genero;
    Ritmo* ritmo;
    Idioma* idioma;
     Tempo* tempo;

public:
    Musica() = default;
    Musica(string nome, Artista* artista, Genero* genero, Ritmo* ritmo, Idioma* idioma, Tempo* tempo);
   
    string getNome() const;
    Artista* getArtista() const;
     Genero* getGenero() const;
    Ritmo* getRitmo() const;
    Idioma* getIdioma() const;
     Tempo* getTempo() const;
};

#endif
