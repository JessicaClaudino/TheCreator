#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>

class Musica;  // Declaração antecipada

class Usuario {
private:
    std::string nome;
    std::vector<Musica*> musicasFavoritas;

public:
    Usuario(std::string nome);
    std::string getNome() const;
    void setMusicasFavoritas(const std::vector<Musica*>& musicas);
    const std::vector<Musica*>& getMusicasFavoritas() const;
    void adicionarMusica(Musica* musica);
};

#endif
