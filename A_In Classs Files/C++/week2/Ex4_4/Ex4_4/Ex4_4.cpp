#include<iostream>
using namespace std;
int main (){
	int A,B;
	cout << "Enter number A : ";
		cin >> A;
	cout << "Enter number B : ";
		cin >> B;
	// test Unart Operator
	cout << "Before A = " << A << endl;
	cout << "++A = " << ++A << endl;
	cout << "After A = " << A << endl << endl;

	cout << "Before A = " << A << endl;
	cout << "A++ = " << A++ << endl;
	cout << "After A = " << A << endl << endl;

	cout << "Before B = " << B << endl;
	cout << "--B = " << --B << endl;
	cout << "After B = " << B << endl << endl;

	cout << "Before B = " << B << endl;
	cout << "B-- = " << B-- << endl;
	cout << "After B = " << B << endl << endl;
}