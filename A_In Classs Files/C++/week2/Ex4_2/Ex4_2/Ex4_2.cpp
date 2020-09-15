#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float x;
	cout << "Enter value x : ";
		cin >> x;
	float result;
	result = pow(x,3)+(3 * x) - 10; //x^3 * 3x -10 Calculate
	cout << "Result of x^3 + 3x - 10 = " << result << endl;
	return 0;
}
