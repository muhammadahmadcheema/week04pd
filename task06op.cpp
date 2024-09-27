#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printa();
void printh();
void printn();
void prints();

main()
{

system("cls");

gotoxy(0,10);
printh();

gotoxy(0,20);
printa();

gotoxy(0,30);
prints();

gotoxy(0,40);
prints();

gotoxy(0,50);
printa();

gotoxy(0,60);
printn();

}

void gotoxy(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printa(){

cout<<" ****  " <<endl;
cout<<"**  ** " <<endl;
cout<<"**  ** " <<endl;
cout<<"****** " <<endl;
cout<<"**  ** " <<endl;
cout<<"**  ** " <<endl;
cout<<"**  ** " <<endl;

}

void printh(){

cout<<"** ** " <<endl; 
cout<<"** ** " <<endl;
cout<<"** ** " <<endl;
cout<<"***** " <<endl;
cout<<"** ** " <<endl;
cout<<"** ** " <<endl;
cout<<"** ** " <<endl;

}

void printn(){

cout<<"***   ** " <<endl;
cout<<"** *  ** " <<endl;
cout<<"**  * ** " <<endl;
cout<<"**   *** " <<endl;
cout<<"**    ** " <<endl;
cout<<"**    ** " <<endl;
cout<<"**    ** " <<endl;

}

void prints(){


cout<<"******** "<<endl;
cout<<"***      "<<endl;
cout<<"******** "<<endl;
cout<<"     *** "<<endl;
cout<<"******** "<<endl;
}