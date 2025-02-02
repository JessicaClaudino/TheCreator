    #include "NumeroGeneros.h"
    #include <set>

    int NumeroGeneros::calcularNumeroGeneros(const std::vector<Musica*>& musicas) const {
        std::set<std::string> generosUnicos;
        for (const Musica* musica : musicas) {
            if (musica != nullptr && musica->getGenero() != nullptr) {
                generosUnicos.insert(musica->getGenero()->getNome());
            }
        }
        return generosUnicos.size();
    }
