#include "Astre.h"

Astre::Astre()
{
    mass = 333054.253182; // par rapport a la Terre
    radius = 0; // distance Terre Soleil
    double* p = new double[2];
    p[0]=0;
    p[1]=0;
    pos = p;
    theta0 = 0;
    speed = 0;
}

Astre::~Astre()
{
    //dtor
}
