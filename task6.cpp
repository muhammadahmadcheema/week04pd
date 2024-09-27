#include<iostream>
using namespace std;

void longestTime(float h, int m);

main()
{

float h;
int m;


cout << "Enter the number of hours: ";
cin >> h;

cout << endl << "Enter the number of minutes: ";
cin >> m;

longestTime(h,m);

}

void longestTime(float h, int m)
{

h = h * 60;

if(h < m)
{
cout << endl << m;
}

if(h > m)
{

h = h / 60;
cout << endl << h;
}

}

