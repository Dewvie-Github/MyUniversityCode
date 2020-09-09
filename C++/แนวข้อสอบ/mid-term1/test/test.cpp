#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float num = 10.55555556 ;
    cout << floorf(num*100) /100 << endl; 
    
    float numFloat = num*100;
    int numInt = numFloat;
    numFloat = numInt/100;
    cout << numFloat << endl;
    system("pause");
    return 0;
}
