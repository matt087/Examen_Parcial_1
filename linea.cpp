/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#include <math.h>
#include "linea.h"
#include "punto.h"

Linea::Linea()
{
    this->p1 = new Punto(1,1);
    this->p2 = new Punto(2,2);
    NUM_LINEAS++;
}

Linea::Linea(Punto *p1, Punto *p2)
{
    this->p1 = p1;
    this->p2 = p2;
    NUM_LINEAS++;
}

float Linea::getD()
{
    d = sqrt(pow((p2->getX()-p1->getX()),2)+pow((p2->getY()-p1->getY()),2));
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

float Linea::getM()
{
    m = ((p2->getY() - p1->getY())/(p2->getX() - p1->getX()))*1.0;
    return m;
}

string Linea::toString()
{
    return "L"+to_string(NUM_LINEAS)+"[P(" + to_string(p1->getX()) +","+to_string(p1->getY())
            + ")- P(" + to_string(p2->getX())+","+to_string(p2->getY()) + "), d = "+to_string(getD())+", m = "+to_string(getM()) + "]\n";
}
