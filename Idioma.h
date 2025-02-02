#pragma once // Evita que o código seja incluído mais de uma vez
#include <string> // Inclui a biblioteca string
#include "Idioma.h" // Inclui Idioma.h para ter acesso a classe Idioma

using namespace std;

class Idioma { 
public:
    string nome; // Atributo nome do idioma

    Idioma(string nome); 
    Idioma() = default; 

    string getNome() const; // Função que retorna o nome do idioma
    void setNome(const string& nome); // Função que modifica o nome do idioma

    bool operator<(const Idioma& other) const;
    bool operator==(const Idioma& other) const;
    bool operator!=(const Idioma& other) const; 
};