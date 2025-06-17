#include "Warlock.hpp"


Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) 
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
}

std::string Warlock::getName() const
{ return _name;}
std::string Warlock::getTitle() const
{ return _title;}
void Warlock::setTitle(std::string title)
{ _title = title;}
void Warlock::introduce() const
{ std::out << _name << ": I am " << _name << ", " << _title << "!" << std::endl; }  
void Warlock::learnSpell(ASpell * spell)
{ 
    if (spell) _sepllBook.learnSpell(spell);
}
void Warlock::forgetSpell(std::string const & spell)
{ 
    if (!spell.empyt()) _spellBook.forgetSpell(spell);
}
void Warlock::launchSpell(std::string const & spell, ATarget const & target)
{
    ASpell * tmp = NULL;
    tmp = _spellBook.createSpell(spell);
    if (tmp)
    {
        tmp->launch(target);
        delete tmp;
    }
}