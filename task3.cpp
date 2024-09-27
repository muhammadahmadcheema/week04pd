#include<iostream>
using namespace std;


void pricecalculator(string cname, float price);


main()
{

string cname;
float price;


cout << "Enter the country's name: ";
cin >> cname;

cout << endl << "Enter the ticker price in dollars: $";
cin >> price;

pricecalculator(cname, price);
}


void pricecalculator(string cname, float price)
{

float discount;

if(cname == "Pakistan")
{
	discount = price * 0.05;
	price = price - discount;
	cout << "Final ticket price after discount: $" << price;
}

if(cname == "Ireland")
{
	discount = price * 0.1;
	price = price - discount;
	cout << "Final ticket price after discount: $" << price;
}

if(cname == "India")
{
	discount = price * 0.2;
	price = price - discount;
	cout << "Final ticket price after discount: $" << price;
}

if(cname == "England")
{
	discount = price * 0.3;
	price = price - discount;
	cout << "Final ticket price after discount: $" << price;
}

if(cname == "Canada")
{
	discount = price * 0.45;
	price = price - discount;
	cout << "Final ticket price after discount: $" << price;
}

}