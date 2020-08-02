#include <iostream>
using namespace std;

class Car{
public:
    int Speed(int MaxSpeed);
};

int Car::Speed(int MaxSpeed){
    return MaxSpeed;
}

int main(){
    Car Obj;
    cout << Obj.Speed(200) << endl;
    return 0;
}
