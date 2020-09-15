#include<iostream>
using namespace std;
void add_func(int,int);
void sub_func(int,int);
void mul_func(int,int);
void dev_func(int,int);
int main(){
	int x,y;	//local variable
	cout << ("Insert x : ");
		cin >> x;
	cout << ("Insert y : ");	
		cin >> y;
	add_func(x,y);
	sub_func(x,y);
	mul_func(x,y);
	dev_func(x,y);
	return 0;
}
void add_func(int x,int y) //Create func.
{	
	cout << x << " + " << y << " = " << x + y << endl;
}
void sub_func(int x,int y){
	cout << x << " - " << y << " = " << x - y << endl;
}
void mul_func(int x, int y){
	cout << x << " * " << y << " = " << x * y << endl;
}
void dev_func(int x, int y){
	cout << x << " / " << y << " = " << x / y << endl;
}