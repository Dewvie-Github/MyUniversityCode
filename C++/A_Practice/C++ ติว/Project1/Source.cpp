#include<iostream>
#include<string>
#include<time.h>
#include<iomanip>

using namespace std;

float calc(float loan,int month,int interest) {
	float total;

	total = (loan / month) * ((loan / month) * (interest / 100));

	return total;	
}

void show(float loans[],int months[], float payment[], int num) {
	
}

int main() {
	//random seed
	srand(time(NULL));

	// price , VAT , VAT price
	float loans[99], months[99], payments[99];

	float interest;
	int deptor;
	cout << "Enter interest rate : ";
	cin >> interest;
	cout << "Enter deptor :";
	cin >> deptor;

	for (int i = 0; i < deptor; i++) {
		cout << " Enter loan " << i + 1 << " : ";
		cin >> loans[i];

		cout << " Enter month " << i + 1 << " : ";
		cin >> months[i];

	}

	for (int i = 0; i < deptor; i++){
		payments[i] = calc(loans[i],months[i],interest);
}



	system("pause");
	return 0;

}