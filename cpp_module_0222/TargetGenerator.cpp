#include "TargetGenerator.hpp"



TargetGenerator::TargetGenerator(){}
TargetGenerator~TargetGenerator()
{
    for (std::map<std::string, ATarget *>::iterator it = _target.begin(); it != _target.end(); ++it)
        delete it->second;
    _target.clear();
}
void TargetGenerator::learnTargetType(ATarget * target)
{
    if (target && _target.find(target->getType()) == _target.end())
    {
        _target[target->getType()] = target->clone();
    }
 }
void TargetGenerator::forgetTargetType(std::string & target)
{
    if (_target.find(target) != _target.end())
    {
        delete _target[target];
        _target.erase(target);
    }
}
ATarget *  TargetGenerator::createTarget(std::string & target)
{
    ATarget * tmp = NULL;
    if (_target.find(target) != _target.end())
        tmp = _target[target]->clone();
    return tmp;
}


