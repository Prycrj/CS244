#include "baseball.h"
#include "baseball.cc"

int main(){
string name;

baseball player_info;

cout<<"Select Which Players Stats to View: Bob | Joe | Randy"<<endl;
cin>>name;

cout<<"You Have Selected: "<<name<<endl;
cout<<"This Players Stats are:"<<endl;

cout<<"Position: "<<player_info.getPosition(name);

cout<<endl<<"Player Number:"<<player_info.getPlayer_Num(name);

//player_info.setHits(2650);
cout<<endl<<"Hits:"<<player_info.getHits();

//player_info.setAt_Bat(4000);
cout<<endl<<"At Bat:"<<player_info.getAt_Bat();

cout<<endl<<"Bat Average:"<<player_info.getBat_Avg();
}
