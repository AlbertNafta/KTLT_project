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
#include "Student.h"


using namespace std;

struct score{
	int midterm;
	int final;
	int progress;
	int average;
	int ID;
};

struct aSchoolYear{
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

struct timeTable{
	int week[4][7];
};

void addStudentToClass(classes *&pHead_c,student *&pHead_s);
bool checkFileWithFstream(string path);
void createClass(classes *&pHead_c);
void creatSchoolYear();
void editClasses(classes *&pHead_c,student *&pHead_s);
void inputClasses(classes *&pHead_c);
void inputTeacherProfile(staff *&pHead_t);
void inputUserProfile(student *&pHead_s) ;
void logIn(student *&pHead_s,staff *&pHead_t,string *use,int *role);
void MenuTeacher(staff *&pHead_t,staff *&pT,student *&pHead_s,string use);
void outputClass(classes *&pHead_c);
void OutputStaff(staff *&pHead_t);
void OutputUser(student *&pHead_s);
void removeStudentFromClass(classes *&pHead_c,student *&pHead_s);
void viewClass(classes *&pHead_c,student *&pHead_s);
void menuStudent(student *&pHead_s);


int main()//this is just a test
{
	student *pHead_s=new student;
	student *pS=pHead_s;
	staff *pHead_t=new staff;
	staff *pT=pHead_t;
	inputUserProfile(pHead_s);
	inputTeacherProfile(pHead_t);
	int roles=-1;
	string use;//to know who is login
	logIn(pHead_s,pHead_t,&use,&roles);
	if (roles==1)
	{
		MenuTeacher(pHead_t,pHead_s,&use);
	}	
	if(roles==0)
	{
	 menuStudent(pHead_s);

	}

//delete []pHead_s;  //chưa rõ có nên dùng không vì nó return ra 3546374343
//delete []pHead_t;
	return 0;
}
