#include <iostream>
#include<thread>
#pragma comment(lib, "Winmm.lib")
#include <conio.h>
#include <windows.h>
#include<iostream>
#include<time.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>
#include <windows.h>
#include<unistd.h>
#include<bits/stdc++.h>
#include<conio.h>
 
using namespace std;

struct staff{
	string userName;
	string passWord;
	string name;
	int age;
	string majors;
	staff *pNext;
};

struct student{
	string userName;
	string passWord;
	string firstName;
	string lastName;
	int gender;
	string birth;
	int socialID;
	int score;
	student *pNext;
};

struct schoolYear{
	struct semester{
		string startDate;
		string endDate;
		struct courses{
			string startDate;
			string endDate;
			int ID;
		};
	}Fall1,Summer2,Autumm3;
}year1;

int main()//this is just a test
{
	staff *pFirst=new staff;
	cin>>pFirst->userName;
	cout<<pFirst->userName;
	
	return 0;
}
