
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
	cout << "input the mass of the object in kg\n";
	cin >> mass;
	//input the volume of the object
	cout<< "input the volume of the object in m^3 \n";
	cin>> volume;
	density=mass/volume;
	cout<< setprecision(2)<<fixed;
	cout<< "------------------------------------------ \n";
	cout << "The density:"<<density<<"kg/m^3"<<endl;
        getch;
        return 0;
    }

