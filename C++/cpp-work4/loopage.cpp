//Calculate age from year born (BE)
#include <iostream>
using namespace std;
int calAge(int); //Create func

int yearCount;
int yearIn;
int thisYear = 2563;

int main(){
    cout << "Welcome to MUTIPLE age calculate program" << endl << endl;
    cout << "Please determine how many year you want to calculate[BE]: ";  //Year insert count
        cin >> yearCount;
    cout << "-----------------------------------------------------------" << endl;
        //Year Loop
        for (int i=1; i<= yearCount; i++)
        {
            cout << "Insert year " << i << ": ";
                cin >> yearIn;
            cout << "Age " << i << ": " << calAge(yearIn) << endl; //this is OUTPUT

        }
    cout << endl << "Thank you." << endl;
    system("pause");
    return 0;
}

//This is calAge func.
int calAge(int year){
    thisYear = 2563 - year;
    return thisYear;
}
