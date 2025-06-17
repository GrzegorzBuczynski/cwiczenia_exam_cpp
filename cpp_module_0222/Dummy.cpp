#include "BrickWall.hpp"


Dummy::Dummy() : ATarget("Target Practice Dummy") {}
Dummy::~Dummy() {}
ATarget * Dummy::clone() const {return new Dummy();}
