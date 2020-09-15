#include <iostream>
using namespace std;
int main (){
	int number;
	cout << "Enter number : ";
		cin >> number;
	cout << "Number " << number << " is";
	cout << ((number%2) == 0 ? " Even ":" Odd ");
	cout << "number" << endl;
		return 0;
}