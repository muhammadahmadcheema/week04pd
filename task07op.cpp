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

void printmaze(){

cout << "##################################" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "#                                #" << endl;
cout << "##################################" << endl;

}

void playermove(int x, int y){

gotoxy(x,y);
cout << "P";
Sleep(200);
gotoxy(x,y);
cout << " ";
}

main()
{

int x = 7, y = 10;
system("cls");
printmaze();

while(true){
   y = 1;
   while(true){
	playermove(x,y);
        y = y+1;
	if(y == 10)
            break;
   }
   y = 10;
    while(true){
	playermove(x,y);
        y = y-1;
	if(y == 1)
            break;
   }			
}

}

	

