#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Target Practice Polymorph"){}
Polymorph::~Polymorph() {}
ASpell* Polymorph::clone() const {
    return new Polymorph();
}