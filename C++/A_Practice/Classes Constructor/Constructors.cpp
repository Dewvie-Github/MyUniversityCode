/*
#include<iostream>
using namespace std;
class MyClass{
    public:
    MyClass(){
        cout << "Hello World!";
    }
};

int main (){
    MyClass myObj;
    return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string brand, model;
    int year;
    Car(string x, string y, int z){
    brand = x;
    model = y;
    year = z;
    }
};

int main(){
 Car carObj1("BMW ", "X5 ", 1999);
 Car carObj2("Ford ", "Mustang " , 1969);

 cout << carObj1.brand << carObj1.model << carObj1.year << endl;
 cout << carObj2.brand << carObj2.model << carObj1.year << endl;
}
*/

#include <iostream>
#include <string>
using namespace std;
class Car {
    public:
        string brand, model;
        int year;
        Car(string x, string y, int z);
};

Car::Car(string x, string y, int z){
    brand = x;
    model = y;
    year = z;
}

int main (){
    Car myObj1("BMW ", "X5 " , 1999);
    Car myObj2("Ford ", "Mustang " ,1969);
    cout << myObj1.brand << myObj1.model << myObj1.year << endl;
    cout << myObj2.brand << myObj2.model << myObj2.year << endl;
}
