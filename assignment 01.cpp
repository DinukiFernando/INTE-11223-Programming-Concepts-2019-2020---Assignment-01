/*
  Student Number    - IM/2019/045
  Student Name      - W.W.A Dinuki Rangika Fernando
  Assignment Number - 01
  Due Date          -21/08/2021
*/


/*This program will have the user input the purchase price of an item and the
  amount tendered by the customer.  Then, the program will use functions to
  determine the highest denominations of various amounts of currency.*/


#include <iostream>
using namespace std;

int main(){
	
	cout<<"***********************START**************************"<<endl;
	double amount_of_purchase;                  //Stores the amount of purchase
	double amount_of_cash_tendered;            //Stores the amount of cash tendered
	int change;                               //Stores the amount of change


//Ask the user for the amount of purchase and the amount tendered to calculate the change
	
	cout<<"Enter the amount of purchase: ";
	cin>> amount_of_purchase;
	cout<<"Enter the amount of cash tendered: ";
	cin>>amount_of_cash_tendered;
	
	change = amount_of_cash_tendered - amount_of_purchase;
	
	cout<<endl;
	
	cout<<"The amount of purchase     : "<<amount_of_purchase<<endl;
	cout<<"The amount of cash tendered: "<<amount_of_cash_tendered<<endl;
	cout<<"Balance                    : "<<change<<endl;
	
	cout<<endl;
	
//Returns the number of RS:5000 bills
	
cout << "Number of RS:5000 bills:  " << change / 5000  << endl;    

//Returns the number of RS:2000 bills

cout << "Number of RS:2000 bills:  " << (change % 5000) / 2000 << endl;

//Returns the number of RS:1000 bills

cout << "Number of RS:1000 bills:  " << ((change % 5000) % 2000) / 1000 << endl;

//Returns the number of RS:500 bills

cout << "Number of RS:500 bills :  " << (((change % 5000) % 2000) % 1000) / 500 << endl;

//Returns the number of RS:100 bills

cout << "Number of RS:100 bills :  " << ((((change % 5000) % 2000) % 1000) % 500) / 100 << endl;

//Returns the number of RS:50 bills

cout << "Number of RS:50 bills  :  " << (((((change % 5000) % 2000) % 1000) % 500 ) % 100) / 50<< endl;

//Returns the number of RS:20 bills

cout << "Number of RS:20 bills  :  " << ((((((change % 5000) % 2000) % 1000) % 500) % 100) % 50) / 20 << endl;

//Returns the number of RS:10 coinss

cout << "Number of RS:10 coins  :  " << (((((((change % 5000) % 2000) % 1000) % 500) % 100) % 50) % 20) / 10 << endl;

//Returns the number of RS:5 coins

cout << "Number of RS:5 coins   :  " << ((((((((change % 5000) % 2000) % 1000) % 500) % 100) % 50) % 20) % 10) / 5 << endl;

//Returns the number of RS:2 coinss

cout << "Number of RS:2 coins   :  " << (((((((((change % 5000) % 2000) % 1000) % 500) % 100) % 50) % 20) % 10) % 5) / 2<< endl;

//Returns the number of RS:1 coins

cout << "Number of RS:1 coins   :  " << ((((((((((change % 5000) % 2000) % 1000) % 500) % 100) % 50) % 20) % 10) % 5) % 2)/1<< endl;


cout<<"************************END*****************************"<<endl;



return 0;
}
	
	

	
	

