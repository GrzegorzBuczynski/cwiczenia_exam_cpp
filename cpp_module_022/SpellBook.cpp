#include "SpellBook.hpp"


SpellBook::SpellBook(SpellBook const & other)
{
    *this = other;
}
SpellBook & SpellBook::operator=(SpellBook const & other)
{
    if (this != &other)
    {
        _SpellBook = other._SpellBook;
    }
    return *this;
}

SpellBook::SpellBook(){}
SpellBook::~SpellBook()
{
    for (std::map < std::string, ASpell * >::iterator it = _SpellBook.begin(); it != _SpellBook.end(); ++it)
        delete it->second;
    _SpellBook.clear();
}
void SpellBook::learnSpell(ASpell * target)
{
    if (target)
    {
        _SpellBook[target->getName()] = target->clone();
    }
}
void SpellBook::forgetSpell(std::string const & target)
{
    if (_SpellBook.find(target) != _SpellBook.end())
        _SpellBook.erase(_SpellBook.find(target));
}
ASpell * SpellBook::createSpell(std::string const & target)
{
    ASpell * tmp = NULL;
    if (_SpellBook.find(target) != _SpellBook.end())
        tmp = _SpellBook.find(target)->second->clone();
    return tmp;
}
