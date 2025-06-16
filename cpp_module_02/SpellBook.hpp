#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    private:
        SpellBook(SpellBook const &);
        SpellBook & operator=(SpellBook const &);
        std::map<std::string, ASpell *> _SpellBook;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *);
        void forgetSpell(std::string const &);
        ASpell * createSpell(std::string const &);
};