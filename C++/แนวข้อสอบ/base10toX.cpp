#include<iostream>
#include<string>
using namespace std;
int main(){
	int base10;
	int base10to2;
	int base10to8;
	int base10to16;
	string base2 = "";
	string base8 = "";
	string base16 = "";
	string bin;

	cout << "Enter base10: " ;
		cin >> base10;
	//This is where the base10 to base 2 Calc.
		base10to2 = base10;
		while (base10to2 > 0){
			bin = to_string(static_cast<long long>(base10to2%2));
			bin += base2;
			base2 = bin;

			base10to2 /= 2;
			}
	//This is where the base10 to base 8 Calc.
	base10to8 = base10;
		while (base10to8 > 0){
			bin = to_string(static_cast<long long>(base10to8 %8));
			bin += base8;
			base8 = bin;

			base10to8 /= 8;
			}
	//This is where the base10 to base 8 Calc.
		base10to16 = base10;
		while (base10to16 > 0){
			bin = to_string(static_cast<long long>(base10to16 % 16));
			bin += base16;
			base16 = bin;

			base10to16 /= 16;
			}
	cout << "base 2: " << base2 << endl;
	cout << "base 8: " << base8 << endl;
	cout << "base 16: " << base16 << endl;
	system("pause");
	return 0;
}

