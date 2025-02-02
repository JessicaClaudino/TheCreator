#include "Usuario.h"
Usuario::Usuario(string nome) : nome(nome) {}

string Usuario::getNome() const {
    return nome;
}
void Usuario::setMusicasFavoritas(const std::vector<Musica*>& musicas){
   this->musicasFavoritas = musicas;
}
 const std::vector<Musica*> &Usuario::getMusicasFavoritas() const{
   return musicasFavoritas;
 }
