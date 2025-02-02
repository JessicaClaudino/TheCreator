#ifndef INTERFACEUSUARIO_H
#define INTERFACEUSUARIO_H

#include "NumeroGeneros.h"
#include "NumeroArtistas.h"
#include "RitmoMedio.h"
#include "TempoMedio.h"
#include "NumeroIdiomas.h"
#include "Musica.h"
#include "GerenciadorCSV.h"
#include <string>
#include <vector>
class InterfaceUsuario {
public:
  InterfaceUsuario();
  void exibirInformacoes();
  void adicionarMusica(Musica* musica);
 void carregarMusicasDeCSV(const std::string& filename);
 void salvarMusicasEmCSV(const std::string& filename);
  int getNumeroGeneros() const;
   int getNumeroArtistas() const;
   double getRitmoMedio() const;
   double getTempoMedio() const;
   int getNumeroIdiomas() const;


private:
  NumeroGeneros numeroGeneros;
  NumeroArtistas numeroArtistas;
  RitmoMedio ritmoMedio;
  TempoMedio tempoMedio;
  NumeroIdiomas numeroIdiomas;
  std::vector<Musica*> musicas;
};
#endif
