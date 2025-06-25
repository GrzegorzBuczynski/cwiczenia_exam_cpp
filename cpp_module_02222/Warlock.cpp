#include "Warlock.hpp"

Warlock(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

~Warlock() {std::cout << _name << ": My job here is done!" << std::endl;}
std::string getName() const {return _name;}
std::string getTitle() const {return _title;}
void setTitle(std::string title) {_title = title;}
void introduce() const {std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;}
void learnSpell(ASpell * spell) {if (spell) _spellBook.learnSpell(spell);}
void forgetSpell(std::string const & spell) {if (!spell.empty()) _spellBook.forgetSpell();}
void launchSpell(std::string const & spell, ATarget const & target)
{
    ASpell * tmp = NULL;
    tmp = _spellBook.createSpell(spell);
    if (tmp)
    {
        tmp->launch(target);
        delete tmp;
    }
}
