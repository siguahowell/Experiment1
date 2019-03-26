
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    // variables to be inserted
    	int ticketprice;
    	int numberOfTicketsSold;
    	int total;
    // input the price of ticket
	cout << "input the price of ticket that was sold \n";
	cin >> ticketprice;
	//input the number of people whou bought the ticket
	cout<< "input the number of people who bought the ticket \n";
	cin>> numberOfTicketsSold;
	total=ticketprice*numberOfTicketsSold;
	cout<< "------------------------------------------ \n";
	cout << "The total price is:"<<total<<"$"<<endl;
        getch();
        return 0;
    }

