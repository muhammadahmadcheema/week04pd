#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printMenu(){

gotoxy(10,1);

cout << "UNIVERSITY OF ENGINEERING AND TECHNOLOGY";

gotoxy(0,2);

cout << endl << "Option 1: Calculate Aggregate";
cout << endl << "Option 2: Compare Marks";

}



void calculateAggregate(string name, float matricmarks, float intermarks, float ecatmarks)
{

float aggregate, matricpercentage, interpercentage, ecatpercentage;

matricpercentage = matricmarks/1100 * 0.3 * 100;
interpercentage = intermarks/550 * 0.3 * 100;
ecatpercentage = ecatmarks/400 * 0.4 * 100;

aggregate = matricpercentage + interpercentage + ecatpercentage;

cout << endl << name << " , your aggregate is: " << aggregate << " %";
 
}

void compareMarks(string namestd1, int ecatmarksstd1, string namestd2, int ecatmarksstd2)
{

if(ecatmarksstd1 > ecatmarksstd2){

cout << endl << "First Roll Number: " << namestd1 << "-01";
cout << endl << "Second Roll Number: " << namestd2 << "-02";

}

if(ecatmarksstd1 < ecatmarksstd2){

cout << endl << "First Roll Number: " << namestd2 << "-01";
cout << endl << "Second Roll Number: " << namestd1 << "-02";

}

}



main(){

system("cls");
printMenu();

int command;

cout << endl << "Select Option 1 or 2: ";
cin >> command;

if(command == 1){

string name;
int matricmarks, intermarks, ecatmarks;

cout << "Enter Student Name: ";
cin >> name;

cout << endl << "Enter matric marks: ";
cin >> matricmarks;

cout << endl << "Enter inter marks: ";
cin >> intermarks;

cout << endl << "Enter ecat marks: ";
cin >> ecatmarks;

calculateAggregate(name, matricmarks, intermarks, ecatmarks);

}

if(command == 2){

string namestd1, namestd2;
int ecatmarksstd1, ecatmarksstd2;

cout << endl << "Enter first student name: ";
cin >> namestd1;

cout << endl << "Enter first student's ecat marks: ";
cin >> ecatmarksstd1;

cout << endl << "Enter second student name: ";
cin >> namestd2;

cout << endl << "Enter second student marks: ";
cin >> ecatmarksstd2;

compareMarks(namestd1, ecatmarksstd1, namestd2, ecatmarksstd2);
}

}









