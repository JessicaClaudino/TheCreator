#include "Ritmo.h"

Ritmo::Ritmo(int bpm) : bpm(bpm) {}

int Ritmo::getBpm() const {
    return bpm;
}

void Ritmo::setBpm(int bpm) {
    this->bpm = bpm;
}
