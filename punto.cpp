/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#include "punto.h"

Punto::Punto()
{
    NUM_P++;
}

Punto::Punto (int x, int y): x(x), y(y)
{
    NUM_P++;
}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}
string Punto::toString()
{
    return "P"+to_string(NUM_P)+": ("+to_string(x)+","+to_string(y)+")\n";
}
