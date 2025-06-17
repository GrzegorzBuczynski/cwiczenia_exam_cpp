#include "SpellBook.hpp"



SpellBook::SpellBook(){}
SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
        delete it->second;
    _spellBook.clear();
}
void SpellBook::learnSpell(ASpell * spell)
{
    if (spell && _spellBook.find(spell->getName()) == _spellBook.end())
    {
        _spellBook[spell->getName()] = spell->clone();
    }
}
void SpellBook::forgetSpell(std::string const & spell)
{
    if (_spellBook.find(spell) != _spellBook.end())
    {
        delete _spellBook[spell];
        _spellBook.erase(spell);
    }
}
ASpell *  SpellBook::createSpell(std::string const & spell)
{
    ASpell * tmp = NULL;
    if (_spellBook.find(spell) != _spellBook.end())
        tmp = _spellBook[spell]->clone();
    return tmp;
}


