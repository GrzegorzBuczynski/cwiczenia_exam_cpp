#include "Warlock.hpp"



Warlock::Warlock(){}
Warlock::Warlock(Warlock const & other){ *this = other;}
Warlock & Warlock::operator=(Warlock const & other)
{
    if (this != &other)
    {
        _name = other._name;
        _title = other._title;
    }
    return *this;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {}
Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}
std::string Warlock::getName() const { return _name;}
std::string Warlock::getTitle() const { return _title;}
void Warlock::setTitle(std::string title) { _title = title;}
void Warlock::introduce() const { std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;}
void Warlock::learnSpell(ASpell * spell)
{
    if (spell)
        _spellBook.learnSpell(spell);
}
void Warlock::forgetSpell(std::string const & spellName)
{
    if (!spellName.empty())
        _spellBook.forgetSpell(spellName);
}
void Warlock::launchSpell(std::string const & spellName, ATarget const & target)
{

    ASpell * spell = NULL;
    spell = _spellBook.createSpell(spellName);
    if(spell)
    {
        spell->launch(target);
        delete spell;
    }
}

