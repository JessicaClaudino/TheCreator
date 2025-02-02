#include "Musica.h"
#include <sstream>
#include <vector>

Musica::Musica(std::string nome, Artista* artista, Genero* genero, Ritmo* ritmo, Idioma* idioma, Tempo* tempo)
    : nome(nome), artista(artista), genero(genero), ritmo(ritmo), idioma(idioma), tempo(tempo) {}
Musica::~Musica() {
    delete artista;
    delete genero;
    delete ritmo;
    delete idioma;
    delete tempo;
}
std::string Musica::getNome() const {
    return nome;
}

void Musica::setNome(const std::string& nome) {
    this->nome = nome;
}
Artista* Musica::getArtista() const{
    return artista;
}
void Musica::setArtista(Artista* artista){
    this->artista = artista;
}

Genero* Musica::getGenero() const {
    return genero;
}
void Musica::setGenero(Genero* genero) {
    this->genero = genero;
}
Ritmo* Musica::getRitmo() const{
    return ritmo;
}
void Musica::setRitmo(Ritmo* ritmo){
    this->ritmo = ritmo;
}
Idioma* Musica::getIdioma() const {
    return idioma;
}
void Musica::setIdioma(Idioma* idioma){
    this->idioma = idioma;
}
Tempo* Musica::getTempo() const{
    return tempo;
}
void Musica::setTempo(Tempo* tempo){
    this->tempo = tempo;
}
// Implementação da função toCSVString
std::string Musica::toCSVString() const {
    return nome + "," +
        (artista ? artista->getNome() : "") + "," +
        (genero ? genero->getNome() : "") + "," +
        (ritmo ? std::to_string(ritmo->getBpm()) : "") + "," +
        (idioma ? idioma->getNome() : "") + "," +
         (tempo ? tempo->getTempoStr() : "");
}


// Implementação da função fromCSVString
Musica Musica::fromCSVString(const std::string& csvLine) {
    std::stringstream ss(csvLine);
    std::string nome, artistaNome, generoNome, ritmoStr, idiomaNome, tempoStr;


    std::getline(ss, nome, ',');
    std::getline(ss, artistaNome, ',');
    std::getline(ss, generoNome, ',');
    std::getline(ss, ritmoStr, ',');
    std::getline(ss, idiomaNome, ',');
     std::getline(ss, tempoStr, ',');

   Artista* artista = new Artista(artistaNome);
    Genero* genero = new Genero(generoNome);
   Idioma* idioma = new Idioma(idiomaNome);
    Ritmo* ritmo = new Ritmo(std::stoi(ritmoStr));
   Tempo* tempo = new Tempo(tempoStr);


    return Musica(nome, artista, genero, ritmo, idioma, tempo);
}
