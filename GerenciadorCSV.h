#pragma once
#include <string>
#include <vector>
#include "Musica.h"

class GerenciadorCSV {
public:
    static std::vector<Musica*> carregarMusicas(const std::string& filename);
    static void salvarMusicas(const std::vector<Musica*>& musicas, const std::string& filename);
};
