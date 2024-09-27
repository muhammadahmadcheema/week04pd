#include<iostream>
using namespace std;

void pricecalculator(int redrose, int whiterose, int tulip);

main(){

int redrose, whiterose, tulip;

cout << "Red rose: ";
cin >> redrose;

cout << endl << "White rose: ";
cin >> whiterose;

cout << endl << "Tulips: ";
cin >> tulip;

pricecalculator(redrose, whiterose, tulip);

}

void pricecalculator(int redrose, int whiterose, int tulip){

float redprice, whiteprice, tulipprice, totalcost, discount;

redprice = redrose * 2.00;
whiteprice = whiterose * 4.10;
tulipprice = tulip * 2.50;

totalcost = redprice + whiteprice + tulipprice;

if(totalcost > 200){
discount = totalcost * 0.8;
cout << endl << "Original Price: $" << totalcost;
cout << endl << "Price after discount: $" << discount;
}

if(totalcost < 200){
cout << endl << "Original Price: $" << totalcost;
cout << endl << "No Discount applied.";
}
}


