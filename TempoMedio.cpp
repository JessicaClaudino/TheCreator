 #include "TempoMedio.h"
 #include "Musica.h"
 #include <numeric>

 double TempoMedio::calcularTempoMedio(const std::vector<Musica*>& musicas) const {
     if (musicas.empty()) return 0.0;

     double totalSegundos = 0.0;
     int numMusicas = 0;

     for (const Musica* musica : musicas) {
         if (musica != nullptr && musica->getTempo() != nullptr) {
            totalSegundos += musica->getTempo()->getMinutos() * 60 + musica->getTempo()->getSegundos();
              numMusicas++;
         }
    }

     return (numMusicas > 0) ? totalSegundos / numMusicas : 0.0;
}
