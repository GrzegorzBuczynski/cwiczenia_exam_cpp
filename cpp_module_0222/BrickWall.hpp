#pragma once
#include "ATarget.hpp"

class Brickwall : public ATarget
{
    public:
        Brickwall();
        ~Brickwall();
        ATarget * clone() const;
}