#include "VasRobot.h"
#include "Prohledavac.h"
#include "Bludiste.h"
#include <iostream>

using namespace std;

VasRobot::VasRobot()
{
    //ctor
}

bool VasRobot::start(Bludiste & map)
{
    return true;
}

bool VasRobot::stop()
{
    return true;
}

std::string VasRobot::jmeno()
{
return "Helmut";
}

void VasRobot::krok(Bludiste & map)
{
bool doprava;
bool doleva;
bool nahoru;
bool dolu;

Souradnice akt_poloha;

nahoru=map.nahoru();
while (nahoru==1)
{
    nahoru=map.nahoru();
    akt_poloha=map.poloha();
    cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";;
}


if (map.vpravo()==1)
{
      dolu=map.dolu();
      while (dolu==1)
      {
          dolu=map.dolu();
          akt_poloha=map.poloha();
          cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";
      }
}
if (map.vpravo()==0)
{
    while (map.dolu()== 1)
    {

    doleva=map.vlevo();
      while (doleva==1)
      {
          doleva=map.vlevo();
          akt_poloha=map.poloha();
          cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";
      }

    doprava=map.vpravo();
    while (doprava==1)
    {
        doprava=map.vpravo();
        akt_poloha=map.poloha();
        cout<<"["<<akt_poloha.x<<","<<akt_poloha.y<<"]";
    }
    }
}
}
void VasRobot::krok(BludisteOdkryte & map){}


