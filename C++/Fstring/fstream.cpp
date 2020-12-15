#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<time.h>
using namespace std;
int main(){
	string Filename;
	ifstream Infile;
	ofstream Outfile;
	int Value;
	//srand(time(0));
	cout << "Enter file name : ";
	cin >> Filename;
	cout << endl;
	
	// open output file for write data
	OutFile.open(Filename.c_str());
	cout << "Now open file" << Filename << "for write" << endl;
	// get name from keyboard
	for(int n = 1; n <= 10 ; n++){
		cout << setw(5) << Value;
		// write value {integer number} to input file
		OutFile << Value << " ";
	}
	cout << endl;
	OutFile.close(); //close output file
	
	cout << " Now close file " << Filename << ".\n\n";
	// open input file to read file
	Infile.open(Filename.c_str());
	cout << " Now open file" << Filename << " for read." << endl;
	// Rad name from input file
	for (int n= 1; n<= 10; n++){
		Infile >> Value;
		cout << setw(5) << Value;
	}
	cout << endl;
	InFile.close();
	cout << "Now close file " << Filename << ".\n \n";
	system("pause");
	return 0;
}
