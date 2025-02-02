#include "Musica.h"

Musica::Musica(std::string nome, Artista artista, Genero genero, Ritmo ritmo, Idioma idioma, Tempo tempo)
    : nome(nome), artista(artista), genero(genero), ritmo(ritmo), idioma(idioma), tempo(tempo) {}

std::string Musica::getNome() const {
    return nome;
}
void Musica::setNome(const std::string& nome) {
    this->nome = nome;
}

Artista Musica::getArtista() const {
    return artista;
}
void Musica::setArtista(const Artista& artista) {
    this->artista = artista;
}

Genero Musica::getGenero() const {
    return genero;
}
void Musica::setGenero(const Genero& genero) {
    this->genero = genero;
}

Ritmo Musica::getRitmo() const {
    return ritmo;
}
void Musica::setRitmo(const Ritmo& ritmo) {
    this->ritmo = ritmo;
}


Idioma Musica::getIdioma() const {
    return idioma;
}
void Musica::setIdioma(const Idioma& idioma) {
    this->idioma = idioma;
}

Tempo Musica::getTempo() const {
    return tempo;
}
void Musica::setTempo(const Tempo& tempo) {
    this->tempo = tempo;
}

bool Musica::operator<(const Musica& other) const {
    return nome < other.nome;
}
bool Musica::operator==(const Musica& other) const{
    return nome == other.nome;
}
