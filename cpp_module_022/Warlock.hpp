#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        SpellBook _spellBook;
        Warlock();
        Warlock(Warlock const & other);
        Warlock & operator=(Warlock const & other);
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        std::string getName() const;
        std::string getTitle() const;
        void setTitle(std::string title);
        void introduce() const;
        void learnSpell(ASpell * spell);
        void forgetSpell(std::string const & spellName);
        void launchSpell(std::string const & spellName, ATarget const & target);
};
