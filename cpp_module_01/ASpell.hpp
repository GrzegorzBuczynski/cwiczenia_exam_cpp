#pragma once
#include <iostream>

class ATarget;

class ASpell {
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell(std::string name, std::string effects);
        ASpell & operator=(ASpell const & other);
        ASpell(ASpell const & other);
        virtual ~ASpell();
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell* clone() const = 0;
        void launch(ATarget const & target) const;
};