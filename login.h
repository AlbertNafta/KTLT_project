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
}

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

void inputUserProfile(student *&pHead_s)
{
	student *pC=pHead_s;
	ifstream fin("User.txt");
	int people;
	fin>>people;
	for(int a=1;a<=people;a++)
{
	fin>>pC->userName;
	fin>>pC->passWord;
	fin>>pC->firstName;
	fin>>pC->lastName;
	fin>>pC->gender;
	fin>>pC->birth;
	fin>>pC->social_ID;

    if(a==people){
	pC->pNext=NULL;
	break;
    }
    pC->pNext=new student;
    pC=pC->pNext;
}

}


void inputTeacherProfile(staff *&pHead_t)
{
	
	staff *pC=pHead_t;
	ifstream fin("Teacher.txt");
	int people;
	fin>>people;
	for(int a=1;a<=people;a++)
{
	
	fin>>pC->userName;
    fin>>pC->passWord;
    fin>>pC->name;
    fin>>pC->age;
    fin>>pC->majors;


    if(a==people){
		pC->pNext=NULL;
		break;
	}
    pC->pNext=new staff;
    pC=pC->pNext;
}


}

void OutputUser(student *&pHead_s)
{
	student *pC2 = pHead_s;
	student *pLen = pHead_s;
	int lenght=0;
	ofstream ofs("User.txt");
	while(pLen!=NULL)//lenght ?
	{
	
		lenght++;
		pLen=pLen->pNext;
	}
	ofs<<lenght<<endl;
    while(pC2!=NULL) 
	{
		ofs << pC2->userName<<endl;
		ofs << pC2->passWord<<endl;
		ofs << pC2->firstName<<endl;
		ofs << pC2->lastName<<endl;
		ofs << pC2->gender<<endl;
		ofs << pC2->birth<<endl;
		ofs << pC2->social_ID<<endl;

			
		pC2=pC2->pNext;
		
	}
	ofs.close();
}

void OutputStaff(staff *&pHead_t)
{
	staff *pC2 = pHead_t;
	staff *pLen = pHead_t;
	int lenght=0;
	ofstream ofs("Teacher.txt");
	while(pLen!=NULL)//lenght ?
	{
	
		lenght++;
		pLen=pLen->pNext;
	}
	ofs<<lenght<<endl;
    while(pC2!=NULL) 
	{
		ofs << pC2->userName<<endl;
		ofs << pC2->passWord<<endl;
		ofs << pC2->name<<endl;
		ofs << pC2->age<<endl;
		ofs << pC2->majors<<endl;

			
		pC2=pC2->pNext;
		
	}
	ofs.close();
}

int logIn(student *&pHead_s,staff *&pHead_t)
{
	string roles1;
	string roles2;
	int choose=0,granted=0;
	
	string userName;	
	do{
		staff *pT=pHead_t;
		student *pS=pHead_s;
		cout<< "Press 1: Log in"<<endl;
		cout<< "Press 2: Sign up"<<endl;
		cout<< "I choose: ";
		cin>>choose;
		switch (choose)
		{
			case 1:
				{
					cout<<"You are teacher or student ?"<<endl;
					cout<<"I am ";
					cin>>roles1;
					system("cls");
					if(roles1.compare("teacher")==0){
					cout<< "Type ""/esc"" to back "<<endl;
					cout<<"Enter username: ";
					cin>>userName;
					while(pT->userName.compare(userName)!=0){
						if(userName.compare("/esc")==0)break;

						pT=pT->pNext;
						if(pT==NULL)
						{
							system("cls");
							cout<<"Not found! Type again: ";
							cin>>userName;
							pT=pHead_t;	
						}
						
					}
					if(userName.compare("/esc")==0)
					{
						system("cls");
						break;
					}
					system("cls");
					cout<<"Username: "<<pT->userName<<endl;
					cout<<"Type password: ";
					string passWord;
					cin>>passWord;
					while(pT->passWord.compare(passWord)!=0){
							system("cls");
							cout<<"Username: "<<pT->userName<<endl;
							cout<<"Wrong! Type again: ";
							cin>>passWord;
					}
					cout<<"Access granted !"<<endl;
					granted=1;
					break;
				}
				if(roles1.compare("student")==0)
				{
					system("cls");
					cout<< "Type ""/esc"" to back "<<endl;
					cout<<"Enter username: ";
					cin>>userName;
					while(pS->userName.compare(userName)!=0){
						if(userName.compare("/esc")==0)break;
						pS=pS->pNext;
						if(pS==NULL)
						{
							system("cls");
							cout<<"Not found! Type again: ";
							cin>>userName;
							pS=pHead_s;	
						}
						
					}
					if(userName.compare("/esc")==0)
					{
						system("cls");
						break;
					}
					system("cls");
					cout<<"Username: "<<pS->userName<<endl;
					cout<<"Type password: ";
					string passWord;
					cin>>passWord;
					while(pS->passWord.compare(passWord)!=0){
							system("cls");
							cout<<"Username: "<<pS->userName<<endl;
							cout<<"Wrong! Type again: ";
							cin>>passWord;
					}
					cout<<"Access granted !"<<endl;
					granted=1;break;
				}
				}
			case 2:
				{
				system("cls");
				cout<<"Are you REALLY want to sign up?"<<endl;
				cout<<"There is no turning back and the given information must be right !"<<endl;
				cout<<"Sign up ? (y/n): ";
				cin>>roles2;
				system("cls");
				if(roles2.compare("n")==0)break;
				cout<<"Sign up as (student or teacher): ";
				cin>>roles2;
				if(roles2.compare("student")==0){
				pS=pHead_s;
				while(pS->pNext!=NULL){
				pS=pS->pNext;
				}
					pS->pNext=new student;
					pS=pS->pNext;
					cout<<"Username: ";
					cin>>pS->userName;
					student *pS2=pHead_s;
					while(pS2!=pS)
					{
						if(pS2->userName.compare(pS->userName)==0)
						{
							cout<<"Username taken! "<<endl;
							cout<<"Username: ";
							cin>>pS->userName;
							pS2=pHead_s;
						}
						pS2=pS2->pNext;
					}
					cout<<"Last name: ";
					cin>>pS->lastName;
					cout<<"First name: ";
					cin>>pS->firstName;
					cout<<"Gender: ";
					cin>>pS->gender;
					cout<<"Birthdate: ";
					cin>>pS->birth;
					cout<<"Social ID: ";
					cin>>pS->social_ID;
					cout<<"And password is: ";
					cin>>pS->passWord;

					system("cls");
					cout<<"DONE !!!";
					sleep(2);
					system("cls");
					pS->pNext=NULL;
					OutputUser(pHead_s);
					
					break;
					
				}
				if(roles2.compare("teacher")==0)
				{
					pT=pHead_t;
				while(pT->pNext!=NULL)pT=pT->pNext;
					pT->pNext=new staff;
					pT=pT->pNext;
					cout<<"Username: ";
					cin>>pT->userName;
					staff *pT2=pHead_t;
					while(pT2!=pT)
					{
						if(pT2->userName.compare(pT->userName)==0)
						{
							cout<<"Username taken! "<<endl;
							cout<<"Username: ";
							cin>>pT->userName;
							pT2=pHead_t;
							cout<<"Done ";
						}
						pT2=pT2->pNext;
					}
					cout<<"Real name: ";
					cin>>pT->name;
					cout<<"Age: ";
					cin>>pT->age;
					cout<<"Major: ";
					cin>>pT->majors;

					cout<<"And password is: ";
					cin>>pT->passWord;
					pT->pNext=NULL;
					OutputStaff(pHead_t);
					system("cls");
					cout<<"DONE !!! ";
					sleep(2);
					system("cls");
					
					
					
					break;
				}
			}
		}
	}while(granted!=1 ) ;
	int role;
	if(roles1.compare("teacher")==0)role=1;
	if(roles1.compare("student")==0)role=0;
	return role;
	}

