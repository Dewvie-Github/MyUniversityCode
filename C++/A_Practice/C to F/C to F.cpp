//���������¹ͧ�� C �� ͧ�� F
//************************************************************
#include<iostream>
using namespace std;
void C_To_F_func(float,float);
int main(){
	float C,F; //C = celsius F = fahrenheit
	cout << "Enter C: "; //input C
		cin >> C;
	C_To_F_func(F,C);       //use function
	cout << (F); //F  㹹�������ҡѺ F � C_To_F_func()
}

// ����÷��١�������ѧ���� ��������¡�����Ǩ����١�᷹���㹿ѧ���蹷�����¡� ��ͧ "���ѧ"
void C_To_F_func(float F,float C){
	F = C* (9/5) + 32;  //�ٵ�����¹ F �� C
	cout << "F = " << F << endl;
	cout << (F >= 70? "HOT" : "COLD") << endl;
}
