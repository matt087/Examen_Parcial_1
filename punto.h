/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>
using namespace std;
class Punto
{
public:
    Punto();
    Punto(int, int);
    int getX();
    int getY();
    string to_String();
private:
    int x;
    int y;
};

#endif // PUNTO_H
