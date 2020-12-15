#include<iostream>
#include<string>
#include<fstream>
#include<time.h>
using namespace std;

int main()
{
	int value;
	ofstream Outfile;
	string Filename = "myfile.txt";
	Outfile.open(Filename.c_str());//,ios_base::out|ios_base::app);
	//srand(time(NULL));
	if(Outfile.is_open())
	{
		cout<<"File is opened."<<endl;
		for(int i = 0;i<=5;i++)
		{
			value = rand()%100;
			cout<<value<<endl;
			Outfile<<value<<"  ";
		}
	}
	else
	{
		cout<<"file could not opened."<<endl;
	}
	ifstream Infile;
	Outfile.close();
	Infile.open(Filename.c_str());
	if(Infile.is_open())
	{
		cout<<"File is opened for read."<<endl;
		while(Infile>>value)
		{
			
			cout<<value;
		}
		}
	else
	{
		cout<<"File could not openned for read."<<endl;
	}



}
