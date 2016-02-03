#ifndef ASTRE_H
#define ASTRE_H

#include <math.h>


class Astre
{
    public:
        Astre();
        virtual ~Astre();
        double Getmass() { return mass; }
        void Setmass(double val) { mass = val; }
        double Getradius() { return radius; }
        void Setradius(double val) { radius = val; }
        double* Getpos() { return pos; }
        void Setpos(double val[2]) { pos = val; }
        double Gettheta0() { return theta0; }
        void Settheta0(double val) { theta0 = val; }
        double Getspeed() { return speed; }
        void Setspeed(double val) { speed = val; }
        void Update(double t) { pos[0] = radius*cos(theta0 + t); pos[1] = radius*sin(theta0 + t); }
    protected:
    private:
        double mass;
        double radius;
        double* pos;
        double theta0;
        double speed;
};

#endif // ASTRE_H
