/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#ifndef LINEA_H
#define LINEA_H

#include "punto.h"
class Linea
{
public:
    static int NUM_LINEAS;
    Linea();
    Linea(Punto *p1, Punto *p2);
    float getD();
    float getM();
    string toString();
    Punto *getP1();
    Punto *getP2();
private:
    float d;
    float m;
    Punto *p1;
    Punto *p2;
};

#endif // LINEA_H
