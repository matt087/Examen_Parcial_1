/*Mateo Montenegro, 1725578775, emontenegroc@est.ups.edu.ec, 24/11/2022*/

#include <iostream>

#include "punto.h"
#include "linea.h"
using namespace std;

int main()
{
    Punto p(1,2);
    Punto p2(6,1);
    cout<<"Punto 1:\n";
    cout<<p.to_String();
    cout<<"\nPunto 2:\n";
    cout<<p2.to_String();
    Linea l(&p,&p2);
    cout<<"\nLinea:\n";
    cout<<l.to_String();
    return 0;
}
