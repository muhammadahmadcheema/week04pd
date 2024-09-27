#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printa(int x, int y);
void printh(int x, int y);
void printm(int x, int y);
void printd(int x, int y);

main()
{

system("cls");

int x = 15, y = 15;
printa(x,y);

printh(x + 10, y);
printm(x + 20, y);
gotoxy(x + 30, y);
printa(x + 35, y);
printd(x + 45, y);


}

void gotoxy(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void printa(int x, int y){

gotoxy(x,y);
cout<<" ****  " <<endl;
gotoxy(x,y+1);
cout<<"**  ** " <<endl;
gotoxy(x,y+2);
cout<<"**  ** " <<endl;
gotoxy(x,y+3);
cout<<"****** " <<endl;
gotoxy(x,y+4);
cout<<"**  ** " <<endl;
gotoxy(x,y+5);
cout<<"**  ** " <<endl;
gotoxy(x,y+6);
cout<<"**  ** " <<endl;

}

void printh(int x, int y){

gotoxy(x,y);
cout<<"** ** " <<endl;
gotoxy(x,y+1);
cout<<"** ** " <<endl;
gotoxy(x,y+2);
cout<<"** ** " <<endl;
gotoxy(x,y+3);
cout<<"***** " <<endl;
gotoxy(x,y+4);
cout<<"** ** " <<endl;
gotoxy(x,y+5);
cout<<"** ** " <<endl;
gotoxy(x,y+6);
cout<<"** ** " <<endl;

}


void printm(int x, int y){
gotoxy(x,y);
cout<<"***     *** " <<endl;
gotoxy(x,y+1);
cout<<"** *   * ** " <<endl;
gotoxy(x,y+2);
cout<<"**  ***  ** " <<endl;
gotoxy(x,y+3);
cout<<"**   *   ** " <<endl;
gotoxy(x,y+4);
cout<<"**       ** " <<endl;
gotoxy(x,y+5);
cout<<"**       ** " <<endl;
gotoxy(x,y+6);
cout<<"**       ** " <<endl;

}

void printd(int x, int y){

gotoxy(x,y);
cout<<"******  "<<endl;
gotoxy(x,y+1);
cout<<"**   ** "<<endl;
gotoxy(x,y+2);
cout<<"**   ** "<<endl;
gotoxy(x,y+3);
cout<<"**   ** "<<endl;
gotoxy(x,y+4);
cout<<"**   ** "<<endl;
gotoxy(x,y+5);
cout<<"**   ** "<<endl;
gotoxy(x,y+6);
cout<<"******  "<<endl;
}