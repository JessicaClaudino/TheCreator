#pragma once 
#include <vector> 
#include <set> 
#include "Musica.h" // Usando Musica.h para ter acesso a classe Musica

using namespace std; 

class NumeroIdioma { 
public: 
    int calcularNumeroIdioma(const vector<Musica>& musicas); // Função que calcula o número de idiomas
};