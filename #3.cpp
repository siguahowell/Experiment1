#include <iostream>
#include <conio.h>
#include<iomanip>
#include <math.h>
using namespace std;

    int main()
    {
    //All the variables
    double AverageDailyBalance;
    double Interest;
    double d1;
    double d2;
    double netbalance;
    float payment;
    float interest;
    //codes for inputting
    cout << "input the bill to be paid \n";
    cin >> netbalance;
    cout << "input the number of days in the billing cycle \n";
    cin >> d1;
    cout << "input the payment of the customer \n";
    cin >> payment;
    cout << "input the days before the cycle ends \n";
    cin >> d2;
    cout << "-------------------------------------------\n";
  AverageDailyBalance=(netbalance*d1-payment*d2)/d1;
  cout<< setprecision(2)<<fixed;
  cout << "His or her balance is:"<<AverageDailyBalance<<"pesos"<<endl;
  cout <<"-------------------------------------------\n";
  interest=AverageDailyBalance*0.0152;
  cout<< "your interest is:"<<interest<<endl;
cout <<"-------------------------------------------\n";
    getch();
    return 0;
    }
