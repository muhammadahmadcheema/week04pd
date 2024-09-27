#include<iostream>
using namespace std;


void pet(int holidays);



main(){
int holidays;

cout << "Holidays: ";
cin >> holidays;

pet(holidays);

}

void pet(int holidays){

int workingdays, gametime, difference;

workingdays = 365 - holidays;
gametime = workingdays * 63 + holidays * 127;

if(gametime < 30000){

int hours, difference, minutes;


difference = 30000 - gametime;

hours = difference/60;
minutes = difference%60;

cout << endl << "Tom sleeps well";
cout << endl << hours << " hours and " << minutes << " minutes less for play";
}

if(gametime > 30000){

int hours, difference, minutes;


difference = gametime - 30000;

hours = difference/60;
minutes = difference%60;


cout << endl << "Tom will run away";
cout << endl << hours << " hours and " << minutes << " minutes for play";
}
}


