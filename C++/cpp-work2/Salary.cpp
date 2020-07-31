//Homework 2
#include<iostream>
#include<string>
using namespace std;
int main(){
    string Name;
    signed long Salary,Sale;
    float Total,Commission,CommissionPercent,ComCut; //ComCut mean commission cut after calculate.
    //****************************Input*****************************
    cout << "Enter your name : ";
        getline(cin,Name);
    cout << "Insert your salary : ";
        cin >> Salary;
    cout << "Enter your sale : ";
        cin >> Sale;
    cout << "Enter your Commission cut rate(%) : ";
        cin >> Commission;
    //****************************Calculate*****************************
            CommissionPercent = Commission/100;
            ComCut = Sale*CommissionPercent;         //mean you get % off commission you sold.
            Total = Salary+ComCut;
    //****************************Output*****************************
    cout << endl << "Your name = " << Name << endl;
    cout << "Total revenue = " << Total << " Baht" << endl;
    system("pause");
    return 0;
}

