//This version has a constructor

class circle
{
  private:
    double radius;
    double  x;
    double  y;

  public:
    circle();
    circle (double,double);

    void setCenter(double ,double );

    void setradius(double);


    double getradius();


    double getArea();


    double getcircumference();

    double getdiameter();

};
