#include<iostream>
using namespace std;

void reverse(string value);

main()
{

string value;

cout << "Enter 'true' or 'false': ";
cin >> value;

reverse(value);

}

void reverse(string value)
{

if(value == "true")
{

cout << "false";
}

if(value == "false")
{

cout << "true";
}
}