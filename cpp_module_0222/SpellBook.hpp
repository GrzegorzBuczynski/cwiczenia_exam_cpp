#pragma once
#include <map>
#include "ASpell.hpp"

class SpellBook
{
    private:
        std::map<std::string, ASpell *> _spellBook;
        SpellBook(SpellBook const & other) = 0;
        SpellBook & operator=(SpellBook const & other) = 0;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell * spell);
        void forgetSpell(std::string & spell);
        ASpell *  createSpell(std::string & spell);
};

