#pragma once
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
        SpellBook(SpellBook const & other);
        SpellBook & operator=(SpellBook const & other);
        std::map < std::string, ASpell * > _SpellBook;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell * spell);
        void forgetSpell(std::string const & spellName);
        ASpell * createSpell(std::string const & spellName);
};