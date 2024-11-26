#include "Wheel.h"

Wheel::Wheel(int sz, std::string tp) : size(sz), type(tp) {}

int Wheel::getSize() const {
    return size;
}

void Wheel::setSize(int sz) {
    size = sz;
}

std::string Wheel::getType() const {
    return type;
}

void Wheel::setType(const std::string& tp) {
    type = tp;
}
