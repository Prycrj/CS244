class Car
{
  private:
    double x;
    double y;

  public:
    car();
    car(double,double);

    void setinit_position(double,double);

    void setspeed(int);

    int getspeed();

    void turn_right(int);

    void turn_left(int);

    void setHeading();

    void getHeading();

    void setBreak();

    int  inc_speed(int);

    int dec_speed(int);

};
