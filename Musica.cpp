#include "Musica.h"
#include <iostream> // para cout e endl

using namespace std;

Musica::Musica(string nome, string artista, Genero genero, int bpm, string idioma, string tempo)
    : nome(nome), artista(artista), genero(genero), bpm(bpm), idioma(idioma), tempo(tempo) {}

string Musica::getNome() const {
    return nome;
}

string Musica::getArtista() const {
    return artista;
}

int Musica::getBpm() const {
    return bpm;
}

string Musica::getIdioma() const {
    return idioma;
}

Genero Musica::getGenero() const {
    return genero;
}

string Musica::getTempo() const {
    return tempo;
}

void Musica::setNome(const string& nome) {
    this->nome = nome;
}

void Musica::setArtista(const string& artista) {
    this->artista = artista;
}

void Musica::setBpm(int bpm) {
    this->bpm = bpm;
}

void Musica::setIdioma(const string& idioma) {
    this->idioma = idioma;
}

void Musica::setGenero(const Genero& genero) {
   this->genero = genero;
}

void Musica::setTempo(const string& tempo) {
    this->tempo = tempo;
}
bool Musica::operator<(const Musica& other) const {
   if (nome != other.nome) {
        return nome < other.nome;
    }
    if(artista!=other.artista) return artista < other.artista;
    if(genero!=other.genero) return genero < other.genero;
    if(bpm!=other.bpm) return bpm < other.bpm;
    if(idioma!=other.idioma) return idioma < other.idioma;
    return tempo < other.tempo;
}

bool Musica::operator==(const Musica& other) const {
    return nome == other.nome && artista == other.artista && genero == other.genero && bpm == other.bpm && idioma == other.idioma && tempo == other.tempo;
}