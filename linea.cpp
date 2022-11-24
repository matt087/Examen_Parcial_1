/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#include "linea.h"
#include "punto.h"

Linea::Linea()
{
    this->p1 = new Punto(1,1);
    this->p2 = new Punto(2,2);
}

Linea::Linea(Punto *p1, Punto *p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

float Linea::getD()
{
    return d;
}

Punto *Linea::getP1()
{
    return p1;
}

Punto *Linea::getP2()
{
    return p2;
}

string Linea::to_String()
{
    return "Punto 1: (" + to_string(p1->getX()) +","+to_string(p1->getY())
            + ")\nPunto 2: (" + to_string(p2->getX())+","+to_string(p2->getY()) + ")\n";
}
