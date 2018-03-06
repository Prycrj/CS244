#include "circle.h"
#include <cmath>
using namespace std;

const double PI=3.14159;

circle::circle()
{

 x=0;
 y=0;
 radius=0;
}

circle::circle(double x1, double y1)
{
x=x1;
y=y1;
radius=radius;
}

void circle::setCenter(double xp, double yp)
{
   //center= x , y;
   x=xp;
   y=yp;
}

void circle::setradius(double r)
{
  radius  = r;
}

double circle::getradius()
{
return radius;
}

double circle::getArea()
{
 return  (pow(radius,2)) * PI;
}

double circle::getdiameter()
{
return 2 * (radius) ;
}

double circle::getcircumference()
{
 return 2 * PI * radius;
}
