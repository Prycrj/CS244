/*
Name: Rayona Pryce & Luis Casado
Date: March 6th 2018
Version: Circle class
Description: This program prompts user to input x & y coordinates and radius for a circle and return the area, circumference and diameter.
*/

#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
circle info;
double x;
double y;
double r;



cout<< "This program will calculate the area , diameter, and circumference of a\n";
cout<<"Circle.What is the x-coordinate?";
cin>> x;
cout<<"What is the y-coordinate?";
cin>> y;
cout<<"What is the radius?";
cin>>r;

info.setCenter(x,y);
info.setradius(r);


cout<< "Here is the Circle's data:\n"<<endl<<endl;

cout<<"Circumference:" <<info.getcircumference()<<endl;
cout<<"Diameter:"<<info.getdiameter()<<endl;
cout<<"Area:"<<info.getArea()<<endl;
return 0;
}
