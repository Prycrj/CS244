baseball::baseball(){
name=name;
position=position;
}

int baseball::getPlayer_Num(string name){

if (name=="Bob")
return 27;
else if (name=="Joe")
return 35;
else if(name=="Randy")
return 66;
else
return 7;
}

string baseball::getPosition(string name){
if (name=="Bob")
return "SB aka: Short Stop";
else if (name=="Joe")
return "3B aka: Third Baseman";
else if (name=="Randy")
return "P aka: Pitcher";
else
return "newbie";
}

void baseball::setAt_Bat(string name){
  if (name=="Bob")
  At_Bat= 4000;
  else if (name=="Joe")
  At_Bat= 4000;
  else if (name=="Randy")
  At_Bat= 4000;
  else
  At_Bat= 0;
}

void baseball::setHits(string name){
  if (name=="Bob")
  Hits= 2600;
  else if (name=="Joe")
  Hits= 2650;
  else if (name=="Randy")
  Hits= 3000;
  else
  Hits= 0;
}

int baseball::getHits(){
return Hits;
}

int baseball::getAt_Bat(){
return At_Bat;
}

double baseball::getBat_Avg(){
 return Hits/At_Bat;
}
