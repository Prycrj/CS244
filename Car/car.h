class Car
{
  private:
    int x_coor;
    int y_coor;
    string init_heading;


  public:
    car();
    car(int,int);

    void setinit_position(int,int);

    void setOrigin(int,int);

    void setspeed(int);

    int getspeed();

    void turn_right(int,int);

    void turn_left(int,int);

    void setHeading(string);

    void getHeading();

    void setBreak();

    int  inc_speed(int);

    int dec_speed(int);

    //int distance_traveled(int);

    void reverse(int,int);

};
