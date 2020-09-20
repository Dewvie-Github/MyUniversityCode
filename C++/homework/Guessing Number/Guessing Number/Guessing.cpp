#include<iostream>
#include<time.h>
using namespace std;

int Guess(int ranNum);

int Round = 0;
int num;

int main() {
	srand(time(NULL));
	int random = 1 + rand() % 10;
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen :)" << endl;
	Round = Guess(random);
	cout << "The secret number is " << random << endl;
	cout << "You made " << Round << " guess." << endl;

}

int Guess(int ranNum) {
	do {
		cout << "Guess the number(1 to 10) : ";
		cin >> num;
		if (num == ranNum) {
			cout << "Congratulations!" << endl;
		}
		else if (num < ranNum) {
			cout << "The secret number is higher" << endl;
		}
		else if (num > ranNum) {
			cout << "The secret number is lower" << endl;
		}
		Round++;
	} while (num != ranNum);

	return Round;
}