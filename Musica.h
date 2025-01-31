#pragma once
#include <string>
#include "Genero.h" // Incluir Genero.h

using namespace std;

class Musica {
public:
    string nome;
    string artista;
    Genero genero; // usar Genero como tipo
    int bpm;
    string idioma;
    string tempo;

    Musica(string nome, string artista, Genero genero, int bpm, string idioma, string tempo);
    Musica() = default;

    string getNome() const;
    void setNome(const string& nome);

    string getArtista() const;
    void setArtista(const string& artista);

    Genero getGenero() const; //retorna um objeto Genero
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