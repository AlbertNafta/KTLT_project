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
#include "Menu.h"

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

struct timeTable{
	int week[4][7];
};

struct schoolYear{
	struct semester{
		string startDate;
		string endDate;
		struct courses{
			string name;
			string teacher;
			string startDate;
			string endDate;
			int ID;
			int credits;
			int nums;
			int days;
			timeTable timetable;
		};
	}Fall1,Summer2,Autumm3;
}year1;

//nhớ gắn các struct trên khi viết hàm ".h"

int main()//this is just a test
{
	student *pHead_s=new student;
	student *pS=pHead_s;
	staff *pHead_t=new staff;
	staff *pT=pHead_t;
	inputUserProfile(pHead_s);
	inputTeacherProfile(pHead_t);
	int roles; //vai trò người đăng nhập
	roles=logIn(pHead_s,pHead_t);
	if (roles==1)
	{
		MenuTeacher(pHead_t,pT,pHead_s);
	}	
	system("cls");
	delete []pHead_s;
	delete []pHead_t;
	return 0;

}
