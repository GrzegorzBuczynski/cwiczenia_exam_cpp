#pragma once
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        std::map<std::string, ATarget *> _target;
        TargetGenerator(TargetGenerator const & other) = 0;
        TargetGenerator & operator=(TargetGenerator const & other) = 0;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget * target);
        void forgetTargetType(std::string & target);
        ATarget *  createTarget(std::string & target);
};
