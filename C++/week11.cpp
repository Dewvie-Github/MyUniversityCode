/*

#include<iostream>
using namespace std;
int main(void){
	int val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
	cout<<" Display all elements of array"<<endl;
	cout<<val[0][0]<<" "<<val[0][1]<<" " <<val[0][2]<<" " << val[0][3] <<endl;
	cout<<val[1][0]<<" " <<val[1][1]<<" " <<val[1][2]<<" " << val[1][3]<<endl;
	cout<<val[2][0]<<" " <<val[2][1]<<" " <<val[2][2]<<" " << val[2][3] <<endl;
	for ( int i = 0; i < 3; ++i) {
		cout<<endl; // start a new line for each row 
		for (int j = 0; j < 4; ++j) cout<<val[i][j]<<" ";
	}
	cout << endl;
	for ( int i = 0; i < 3; ++i) {
		cout<<endl; // start a new line for each row
		for (int j = 0; j < 4; ++j) {
			val[i][j] *= 2;
			cout<<val[i][j]<<" ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main() {
	int a[2][3];
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
		cout<<"Enter a["<<i<<"]["<<j<<"] : ";
		cin>>a[i][j];
		}
	}
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
system("pause");
return 0;
}
*/

/*
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int score[2][4];
	for (int i = 0; i < 2; i++){
		cout << "Input subtest " << i+1 << " : ";
		cin >> score[i][0];
		cout << "Input midterm " << i+1 << " : ";
		cin >> score[i][1];
		cout << "Input final " << i+1 << " : ";
		cin >> score[i][2];
		score[i][3] = score[i][0] + score[i][1] + score[i][2];
		cout << "---------------------------------------" << endl;

	}
	cout <<  setw(40) << setfill('-')<< "\n";
	cout << "No.\tSubtest\t\tMidterm\t\tFinal\t\tTotal" << endl;
	cout <<  setw(40) << setfill('-')<< "\n";
	for (int i=0; i < 2; i++){
		cout << i+1 << "\t";
		for (int j = 0; j< 4; j++){
			cout <<score[i][j] << "\t\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
void display(int nums[3][4]);
int main()
{ 
	int val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
	display(val);
	system("pause");
	return 0;

}

void display (int nums[3][4]){ 
	for(int row_num = 0 ; row_num < 3 ; row_num++) {
	for(int col_num = 0; col_num < 4; ++col_num)
	cout<<nums[row_num][col_num]<<" ";

	cout<<endl;
		}
	}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int r,c;
	int matrix[5][5];
	cout << "Enter number of row : ";
	cin >> r;
	cout << "Enter number of columns : ";
	cin >> c;
	cout << "Enter matrix A" << endl;
	for (int i=0; i < r; i++){
		for (int j=0; j<c; j++){
			cin >> matrix[i][j];
		}
	}
	cout << "matrix 2A" << endl;
	for (int i=0; i < r; i++){
		for (int j=0; j<c; j++){
			cout << matrix[i][j]*2 << " ";
		}
		cout << endl;
	}

	cout << "Transpose matrix 2A" << endl;
	for (int i=0; i < c; i++){
		for (int j=0; j<r; j++){
			cout << matrix[j][i]*2 << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void display(string name[5], float price[3][5]){
	
	for (int i = 0; i<5; i++){
			cout << i+1 <<setw(10)<< name[i] <<setw(20)<< price[0][i];
			cout <<setw(20)<< price[1][i] <<setw(24)<< price[2][i] << endl;
		}
}
float calprice(float price[3][5]){
	for(int i=0;i<5;i++){
	price[1][i] = price[0][i]*(0.07);
	price[2][i] = price[0][i] + price[1][i];
	}
	return (price[3][5]);
}

string name[5];
float price[3][5];

int main(){
	for (int i = 0; i < 5; i++){
		cout << "Enter Product Name : ";
		cin >> name[i];
		cout << "\t price : ";
		cin >> price[0][i];
	}
	//Calculate
	cout << setfill(' ') <<"No."<<setw(10)<<"Product"<<setw(20) <<"price"<<setw(20)<< "vat7%" << setw(24) <<"Net" << endl;
	calprice(price);
	display(name,price);

	
	system("pause");
	return 0;
}





