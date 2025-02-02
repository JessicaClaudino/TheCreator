#include "Musica.h"

Musica::Musica(string nome, Artista* artista, Genero* genero, Ritmo* ritmo, Idioma* idioma, Tempo* tempo)
    : nome(nome), artista(artista), genero(genero), ritmo(ritmo), idioma(idioma), tempo(tempo) {}

string Musica::getNome() const {
    return nome;
}

Artista* Musica::getArtista() const{
    return artista;
}

Genero* Musica::getGenero() const {
  return genero;
}

Ritmo* Musica::getRitmo() const{
  return ritmo;
}

Idioma* Musica::getIdioma() const {
  return idioma;
}

Tempo* Musica::getTempo() const {
  return tempo;
}
