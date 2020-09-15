#include<iostream>
#include<string>
using namespace std;

string cal_base2(int base10);
string cal_base8(int base10);
string cal_base16(int base10);

string base2 = "";
string base8 = "";
string base16 = "";
string bin = "";
int base10;
int main(){
	;
	cout << "Enter base10: ";
		cin >> base10;
	base2 = cal_base2(base10);
	cout << base2 << endl;

}

string cal_base2(int base10){
	while (base10 > 0) {
		bin = static_cast<long long>(base10 % 2);
		base2 = bin + base2;
		base10 /= 2;
	}
	return base2;
}