#pragma once
#ifndef INTERFACEUSUARIO_H
#define INTERFACEUSUARIO_H

#include <iostream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "NumeroGeneros.h"
#include "NumeroArtistas.h"
#include "RitmoMedio.h"
#include "TempoMedio.h"
#include "NumeroIdiomas.h" // Correção: incluir NumeroIdiomas.h (o nome estava errado antes)
#include "Musica.h" // Incluir para usar Musica*

class InterfaceUsuario {
private:
     NumeroGeneros numeroGeneros;
     NumeroArtistas numeroArtistas;
     RitmoMedio ritmoMedio;
     TempoMedio tempoMedio;
     NumeroIdiomas numeroIdiomas; // Correção: usar NumeroIdiomas

public:
    void exibirMenu();
    void executarOpcao(const std::vector<int>& opcoes, const Usuario& usuario);
    std::string obterNomeUsuario();
    Musica* obterMusica();
    std::vector<Musica*> obterMusicas(int numMusicas); // Recebe o número de músicas
    void exibirResultados(const Usuario& usuario, const std::vector<int>& opcoes);
};

#endif
