#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock {

    private:
        std::string _name;
        std::string _title;
        std::map <std::string, ASpell *> _SpellBook;
        Warlock & operator=(Warlock const &);
        Warlock();
        Warlock(Warlock const &);
    
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string const & getName() const;
        std::string const & getTitle() const;
        void setTitle(std::string const & title);
        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string SpellName);
        void lunchSpell(std::string SpellName, ATarget & target);
};