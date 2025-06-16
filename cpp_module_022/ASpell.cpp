
#include "ATarget.hpp"

// class ATarget;

// class ASpell
// {
//     protected:
//         std::string _name;
//         std::string _effects;
//     public:
//         ASpell(std::string name, std::string effects);
//         ASpell(ASpell const & other);
//         ASpell & operator=(ASpell const & other);
//         virtual ~ASpell();
//         std::string getName() const;;
//         std::string getEffects() const;
//         virtual ASpell * clone() const = 0;
//         void launch(ATarget const & target) const;

// };


ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects) {}
ASpell::ASpell(ASpell const & other): _name(other._name), _effects(other._effects) {}
ASpell & ASpell::operator=(ASpell const & other)
{
    if (this != &other)
    {
        _name = other._name;
        _effects = other._effects;
    }
    return *this;
}
ASpell::~ASpell(){}
std::string ASpell::getName() const
{
    return _name;
}
std::string ASpell::getEffects() const
{
    return _effects;
}
void ASpell::launch(ATarget const & target) const
{
    target.getHitBySpell(*this);
}