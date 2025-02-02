#pragma once
#include <string>
#include "Genero.h" // Incluir Genero.h
#include "Artista.h" // Incluir Artista.h
using namespace std;

class Musica {
public:
    string nome;
    Artista artista;
    Genero genero; // usar Genero como tipo
    int bpm;
    string idioma;
    string tempo;

    Musica(string nome, Artista artista, Genero genero, int bpm, string idioma, string tempo);
    Musica() = default;

    string getNome() const;
    void setNome(const string& nome);

    Artista getArtista() const;
    void setArtista(const Artista& artista);

    Genero getGenero() const; //retorna um objeto Generos
    void setGenero(const Genero& genero); //recebe um objeto Genero

    int getBpm() const;
    void setBpm(int bpm);

    string getIdioma() const;
    void setIdioma(const string& idioma);

    string getTempo() const;
    void setTempo(const string& tempo);
    
    bool operator<(const Musica& other) const;
    bool operator==(const Musica& other) const;
};