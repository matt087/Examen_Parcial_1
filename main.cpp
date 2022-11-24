/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#include <iostream>

#include "punto.h"
#include "linea.h"
using namespace std;

int Linea::NUM_LINEAS = 0;
int Punto::NUM_P = 0;
int main()
{
    cout<<"\tCALCULADORA DISTANCIA Y PENDIENTE"<<endl;
    Punto p1(-7,4);
    cout<<p1.toString();
    Punto p2(2,9);
    cout<<p2.toString();
    Linea l1(&p1,&p2);
    cout<<l1.toString();
    return 0;
}
