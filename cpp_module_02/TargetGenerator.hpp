#pragma once
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator const &);
        TargetGenerator & operator=(TargetGenerator const &);
        std::map<std::string, ATarget *> _target;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget *);
        void forgetTargetType(std::string const &);
        ATarget * createTarget(std::string const &);
};