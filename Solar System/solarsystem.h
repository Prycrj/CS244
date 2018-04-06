#include <iostream>
#include <string>

using namespace std;

/* SB Assignment 3 Instructions:
Astronomers  and physicists also use OOP. Design a class for objects in our solar system. Use the Internet to gather information to design this class.
Since this is design only, capture as much as possible.*/

class SolarSystem{

private:
  string planet;
  double distance_fromsun;
  int planet_spinspeed;
  int planet_rings;
  int planet_moons;
  int planet_orbitperiod;
  double planet_diameter;
  double planet_mass;
  double planet_gravity;
  double lbs_onplanet;
  double temp;
  double composition;
  string atmosphere;

public:
  SolarSystem();

  void setdistance_fromsun(string);
  double getdistance_fromsun();

  void setplanet_spinspeed(string);
  int getplanet_spinspeed();

  void setplanet_rings(string);
  int getplanet_rings();

  void setplanet_moons(string);
  int setplanet_moons();

  void setplanet_orbitperiod(string);
  int setplanet_orbitperiod();

  void setplanet_diameter(string);
  double getplanet_diameter();

  void setplanet_mass(string);
  double getplanet_mass();

  void setplanet_gravity(string);
  double getplanet_gravity();

  void setlbs_onplanet(string);
  double getlbs_onplanet()

  void settemp(string);
  double gettemp();

  void setcomposition(string);
  double getcomposition();

  void getatmosphere(string);
  string setatmosphere();

};
