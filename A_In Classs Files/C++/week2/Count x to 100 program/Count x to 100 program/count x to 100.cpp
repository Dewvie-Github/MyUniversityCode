#include <iostream>
using namespace std;
void count_func(int);
int main(){
	unsigned short x;
	cout << "Insert x : ";
		cin >> x;
	cout << "count " << x << " to 100" << endl;
	count_func(x);
	system ("pause");
	return 0;
}
//calculate
void count_func(int x){
	for (x=x; x <= 100; x++){
		cout << x  << "\n";
	}
}