/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#include "punto.h"

Punto::Punto(){}

Punto::Punto (int x, int y): x(x), y(y){}

int Punto::getX()
{
    return x;
}

int Punto::getY()
{
    return y;
}
string Punto::to_String()
{
    return "Coordenada X: "+to_string(x)
            +"\nCoordenada Y: "+to_string(y)+"\n";
}
