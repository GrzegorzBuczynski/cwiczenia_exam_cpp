#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), effects(effects) {}
ASpell & ASpell::operator=(ASpell const & other){
    _name = other.name;
    _effects = other.effects;
    return *this;
}

ASpell::ASpell(ASpell const & other){
    *this = other;
}

ASpell::~ASpell(){}

std::string ASpell::getName() const {
    return _name;
 }

std::string ASpell::getEffect() const {
    return _effects;
 }

 void ASpell::launch(ATarget const & target) const{
    target.getHitBySpell(*this);
 }