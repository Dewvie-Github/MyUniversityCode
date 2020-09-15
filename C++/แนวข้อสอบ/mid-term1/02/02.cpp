#include<iostream>
using namespace std;
int main(){
	unsigned int base2;
	float base10 = 0;
	int sumStorage1;
	int numCount=0;
	float pow = 1;
	cout << "Enter base2: ";
		cin >> base2;

	//This is where the base2 to base 1120 Calc.
	while (base2 > 0){
		sumStorage1 = base2 % 10;
		base10 = base10 + (sumStorage1 * pow);		//pow = 1(2**0) then when program run pow'll be 2**x
		pow = pow * 2;
		base2 = base2 / 10;
	}
	cout << "Base 10 = " << base10 << endl;
	system("pause");
}
