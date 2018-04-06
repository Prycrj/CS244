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

  double setdistance_fromsun(string);
  double getdistance_fromsun();

  int setplanet_spinspeed(string);
  int getplanet_spinspeed();

  int setplanet_rings(string);
  int getplanet_rings();

  int setplanet_moons(string);
  int setplanet_moons();

  int setplanet_orbitperiod(string);
  int setplanet_orbitperiod();

  double setplanet_diameter(string);
  double getplanet_diameter();

  double setplanet_mass(string);
  double getplanet_mass();

  double setplanet_gravity(string);
  double get planet_gravity();

  double setlbs_onplanet(string);
  double getlbs_onplanet()

  double settemp(string);
  double gettemp();

  double setcomposition(string);
  double getcomposition();

  string getatmosphere(string);
  string setatmosphere();

};
