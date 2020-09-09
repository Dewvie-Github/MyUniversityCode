#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	for (int i =1; i <=100;){
		for (int n = 1; n <= 10; n++){
			cout << i << ") = " << rand() % 6 + 1 << "	";
			i++;
		}
		cout << endl; 
		
	}
	system("pause");
	return 0;
}
