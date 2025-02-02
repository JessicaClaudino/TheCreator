#pragma once
#include <string>
#include "Genero.h"
#include "Artista.h"
#include "Idioma.h"
#include "Ritmo.h"
#include "Tempo.h"

class Musica {
 private:
    std::string nome;
    Artista* artista;
    Genero* genero;
    Ritmo* ritmo;
    Idioma* idioma;
    Tempo* tempo;

 public:
    Musica(std::string nome, Artista* artista, Genero* genero, Ritmo* ritmo, Idioma* idioma, Tempo* tempo);
    Musica() = default;
     ~Musica();
    std::string getNome() const;
    void setNome(const std::string& nome);
    Artista* getArtista() const;
    void setArtista(Artista* artista);
    Genero* getGenero() const;
    void setGenero(Genero* genero);
     Ritmo* getRitmo() const;
    void setRitmo(Ritmo* ritmo);
     Idioma* getIdioma() const;
    void setIdioma(Idioma* idioma);
    Tempo* getTempo() const;
    void setTempo(Tempo* tempo);
    // Funções para CSV
   std::string toCSVString() const;
    static Musica fromCSVString(const std::string& csvLine);
};
