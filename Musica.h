#pragma once
#include <string>
#include "Genero.h"
#include "Ritmo.h"
#include "Idioma.h"
#include "Tempo.h"
#include "Artista.h"

class Musica {
private:
    std::string nome;
    Artista artista;
    Genero genero;
    Ritmo ritmo;
    Idioma idioma;
    Tempo tempo;

public:
    Musica(std::string nome, Artista artista, Genero genero, Ritmo ritmo, Idioma idioma, Tempo tempo);
    Musica() = default;

    std::string getNome() const;
    void setNome(const std::string& nome);

    Artista getArtista() const;
    void setArtista(const Artista& artista);

    Genero getGenero() const;
    void setGenero(const Genero& genero);
    
     Ritmo getRitmo() const;
    void setRitmo(const Ritmo& ritmo);

    Idioma getIdioma() const;
    void setIdioma(const Idioma& idioma);

    Tempo getTempo() const;
    void setTempo(const Tempo& tempo);

    bool operator<(const Musica& other) const;
    bool operator==(const Musica& other) const;
};
