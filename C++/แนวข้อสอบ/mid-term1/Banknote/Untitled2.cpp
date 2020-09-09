#include<iostream>
using namespace std;
int main(){
	int money;
	cout << "Enter money: ";
		cin >> money;
	while (money < 100 || money > 20000){
	cout << "sorry, please enter money(100-20,000): ";
		cin >> money;	
	}
	cout << "Banknote 1,000 Baht: " << money/1000 << endl;
	money = money%1000;
	cout << "Banknote   500 Baht: " << money/500 << endl;
	money = money%500;
	cout << "Banknote   100 Baht: " << money/100 << endl;
	money = money%100;
	cout << "Other: " << money << endl;
	cout << "-----Exit-----" << endl;
	system("pause");
	return 0;
}
