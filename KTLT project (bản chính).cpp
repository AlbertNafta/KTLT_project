#include <iostream>
#include<thread>
#include <conio.h>
#include <windows.h>
#include<iostream>
#include<time.h>
#include<cstdlib>
#include<string.h>
#include<cstring>
#include<windows.h>
#include <windows.h>
#include<unistd.h>
#include<bits/stdc++.h>
#include<conio.h>
#include "login.h"

using namespace std;

struct score{
	int midterm;
	int final;
	int progress;
	int average;
};
struct student{
	string userName;
	string passWord;
	string firstName;
	string lastName;
	string gender;
	string birth;
	int social_ID;
	
	student *pNext;
};

struct staff{
	string userName;
	string passWord;
	string name;
	int age;
	string majors;
	staff *pNext;
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
	int choose;
	student *pHead_s=new student;
	inputUserProfile(pHead_s);
	logIn(pHead_s);
	
	
	
	return 0;
}
