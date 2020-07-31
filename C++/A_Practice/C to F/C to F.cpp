//โปรแกรมเปลี่ยนองศา C เป็น องศา F
//************************************************************
#include<iostream>
using namespace std;
void C_To_F_func(float,float);
int main(){
	float C,F; //C = celsius F = fahrenheit
	cout << "Enter C: "; //input C
		cin >> C;
	C_To_F_func(F,C);       //use function
	cout << (F); //F  ในนี้ไม่เท่ากับ F ใน C_To_F_func()
}

// ตัวแปรที่ถูกเก็บไว้ที่ฟังก์ชั่น เมื่อเรียกใช้แล้วจะไม่ถูกไปแทนที่ในฟังก์ชั่นที่เรียกไป ต้อง "ระวัง"
void C_To_F_func(float F,float C){
	F = C* (9/5) + 32;  //สูตรเปลี่ยน F เป็น C
	cout << "F = " << F << endl;
	cout << (F >= 70? "HOT" : "COLD") << endl;
}
