
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
	int box = 250;
	int sideline = 100;
	int premium = 50;
	int general = 25;
	int a= 5750, b = 28000, c=35750, d=18750;    
    // variables to be inserted
    	int ticketprice;
    	int numberOfTicketsSold;
    	int total;
    // input the price of ticket
    cout<< "------------------------------------------ \n";
	cout << "in box tickets the total sales is"<< box*a <<"$"<<endl;
	cout<< "------------------------------------------ \n";
	//input the number of people whou bought the ticket
	cout<< "in sideline the total sales is"<<sideline*b<<"$"<<endl;
	cout<< "------------------------------------------ \n";
	cout << "in premium the total sales is "<<premium*c<<"$"<<endl;
	cout<< "------------------------------------------ \n";
	cout << "in general admission the total sales is"<<d*general<<"$"<<endl;
	cout<< "------------------------------------------ \n";
	total=( box*a)+(sideline*b)+(premium*c)+(d*general);
	cout<< "------------------------------------------ \n";
	cout << "The total price is:"<< total<<"$"<<endl;
	cout<< "------------------------------------------ \n";
        getch();
        return 0;
    }

