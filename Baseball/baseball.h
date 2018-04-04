#include <iostream>
#include <string>
using namespace std;


class baseball{

  private:
      string name;
      string position;
      int Player_Num;
      double Bat_Avg;
      double Hits;
      double At_Bat;


  public:
      baseball();
      int getPlayer_Num(string);
      string getPosition(string) ;
      void setHits(string);
      void setAt_Bat(string);
      double getHits();
      double getAt_Bat();
      double getBat_Avg();
};
