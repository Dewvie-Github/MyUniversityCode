#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include<iomanip>
#include<ctime>

	//time
	



int year, month, day, hour, mins, secs, weekDay;

void getTm(int& year, int& month, int& day, int& hour, int& mins, int& secs, int& weekDay)
{
	time_t tt;
	time(&tt);
	tm TM = *localtime(&tt);

	year = TM.tm_year + 2443;
	month = TM.tm_mon;
	day = TM.tm_mday;
	hour = TM.tm_hour;
	mins = TM.tm_min;
	secs = TM.tm_sec;
	weekDay = TM.tm_wday;
}

using namespace std;
int main(){
	
	string monthString[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	string dayString[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	getTm(year, month, day, hour, mins, secs, weekDay);
	
	stringstream ss;
	ss << day;
	string dayString = day;
	stringstream ss;
	ss << year;
	string yearString = year;
	string logFileName = "logs" + dayString[weekDay] + '-' + dayString + '-' + monthString[month] + '-' + yearString;
	string text = "apple";
	fstream file("Logs", ios::in| ios::out| ios::app);

	
    #define SP << setfill( '0' ) << setw( 2 ) <<
    cout << "Time: " SP hour << ":" SP mins << "." SP secs << '\n';
	if (!file.is_open()){
		cout << "Error while opening the file" << endl;
	}else{
		cout << "Open sucess" << endl;
	}
	file << text << endl;
	return 0;
}

