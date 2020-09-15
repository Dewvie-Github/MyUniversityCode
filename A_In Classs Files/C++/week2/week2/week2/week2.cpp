#include<iostream>
#include<string>
using namespace std;
void age_func(unsigned short,string);
int main(){
	string Name;
	unsigned short Years;
	cout << ("Enter your name : ");
		getline (cin,Name);
	cout << ("Enter year of birth : ");
		cin >> Years;
	age_func(Years,Name);
	return 0;
}
void age_func(unsigned short Years,string Name){
	cout << "Name = "<< Name <<"\nYour age = " << 2563-Years << " years old." << endl;
}