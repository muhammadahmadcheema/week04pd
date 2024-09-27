#include<iostream>
using namespace std;


void tpchecker(int people, int tp);

main(){

int people, tp;

cout << "Number of people in the household: ";
cin >> people;

cout << endl << "Number of rolls of TP: ";
cin >> tp;

tpchecker(people, tp);
}

void tpchecker(int people, int tp){

int sheets, avgsheetsperday;
int days;

sheets = tp * 500;
avgsheetsperday = people * 57;
days = sheets / avgsheetsperday;

if(days < 14){
cout << endl << "Your TP will only last " << days << " days, buy more!";
}

if(days >= 14){
cout << endl << "Your TP will last " << days << " days, no need to panic!";
}
}
