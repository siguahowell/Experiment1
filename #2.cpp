
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

    int main()
    {
    // variables to be inserted
    	double mass;
    	double volume;
    	double density;
    // input the mass of the object
	cout << "input the mass of the object in g \n";
	cin >> mass;
	//input the volume of the object
	cout<< "input the density of the object in g/cm^3 \n";
	cin>> density;
	volume=(mass/density)/4;
	cout<< setprecision(2)<<fixed;
	cout<< "------------------------------------------ \n";
	cout << "The density:"<<volume<<"cm^3"<<endl;
        getch();
        return 0;
    }
