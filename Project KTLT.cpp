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

struct student{
	string userName;
	string passWord;
	string firstName;
	string lastName;
	string gender;
	string birth;
	int social_ID;
	int score;
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

void inputUserProfile(student *&pHead_s)
{
	
	student *pC=pHead_s;
	ifstream fin("User.txt");
	int n;
	fin>>n;
	for(int a=1;a<=n;a++)
{
	
	fin>>pC->userName;
    fin>>pC->passWord;
    fin>>pC->firstName;
    fin>>pC->lastName;
    fin>>pC->gender;
    fin>>pC->birth;
    fin>>pC->social_ID;
    fin>>pC->score;
    if(a==n)break;
    pC->pNext=new student;
    pC=pC->pNext;
}
}
void logIn(student *&pHead_s)
{
	int choose=0,granted=0;
	student *pS=pHead_s;
	string userName;
	do{
		cout<< "Press 1: Log in"<<endl;
		cout<< "Press 2: Sign up"<<endl;
		cout<< "I choose: ";
		cin>>choose;
		switch (choose)
		{
			case 1:
				{
					cout<<"Enter username: ";
					cin>>userName;
					while(pS->userName.compare(userName)!=0){
						pS=pS->pNext;
						if(pS==NULL)
						{
							system("cls");
							cout<<"Not found! Type again: ";
							cin>>userName;
							pS=pHead_s;	
						}
						
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
					granted=1;
					break;
				}
			case 2:
				{
				
				pS=pHead_s;
				while(pS->pNext!=NULL)pS=pS->pNext;
				
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
					pS->score=0;
					system("cls");
					cout<<"DONE !!!";
					sleep(2);
					system("cls");
					break;
				}
			
		}
	}while(granted!=1);
	return;
}

int main()//this is just a test
{
	int choose;
	student *pHead_s=new student;
	inputUserProfile(pHead_s);
	logIn(pHead_s);
	
	

	return 0;
}

