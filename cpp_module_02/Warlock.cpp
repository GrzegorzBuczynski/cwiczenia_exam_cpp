#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name << ": My job here is done!" << std::endl;
    for (std::map<std::string, ASpell *>::iterator it = _SpellBook.begin(); it != _SpellBook.end(); ++it) {
        delete it->second;
    }
    _SpellBook.clear();
}

std::string const & Warlock::getName() const
{
    return _name;
}


std::string const & Warlock::getTitle() const
{
    return _title;
}

void Warlock::setTitle(std::string const & title) 
{
    _title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell)
        if (_SpellBook.find(spell->getName()) == _SpellBook.end())
            _SpellBook[spell->getName()] = spell->clone();
}

 void Warlock::forgetSpell(std::string SpellName)
 {
    if (_SpellBook.find(SpellName) != _SpellBook.end())
        _SpellBook.erase(_SpellBook.find(SpellName));
 }

void Warlock::launchSpell(std::string SpellName, ATarget & target)
{
    if (_SpellBook.find(SpellName) != _SpellBook.end())
        _SpellBook[SpellName]->launch(target);
}


// Private

Warlock::Warlock(){}

Warlock & Warlock::operator=(Warlock const & other)
{
    _name = other._name;
    _title = other._title;
    return *this;
}

Warlock::Warlock(Warlock const & other){
    *this = other;
}



