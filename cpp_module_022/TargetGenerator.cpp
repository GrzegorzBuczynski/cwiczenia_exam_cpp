#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(TargetGenerator const & other)
{
    *this = other;
}
TargetGenerator & TargetGenerator::operator=(TargetGenerator const & other)
{
    if (this != &other)
    {
        _target = other._target;
    }
    return *this;
}

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator()
{
    for (std::map < std::string, ATarget * >::iterator it = _target.begin(); it != _target.end(); ++it)
        delete it->second;
    _target.clear();
}
void TargetGenerator::learnTargetType(ATarget * target)
{
    if (target)
    {
        _target[target->getType()] = target->clone();
    }
}
void TargetGenerator::forgetTargetType(std::string const & target)
{
    if (_target.find(target) != _target.end())
        _target.erase(_target.find(target));
}
ATarget * TargetGenerator::createTarget(std::string const & target)
{
    ATarget * tmp = NULL;
    if (_target.find(target) != _target.end())
        tmp = _target.find(target)->second->clone();
    return tmp;
}
