#ifndef RITMO_H
#define RITMO_H

class Ritmo {
private:
    int bpm; // Batidas por minuto

public:
    // Construtor padrão
    Ritmo() : bpm(0) {}

    // Construtor com valor inicial
    Ritmo(int bpm);

    // Getter para o BPM
    int getBpm() const;

    // Setter para o BPM
    void setBpm(int bpm);
};

#endif
