#include<iostream>
#include<string.h>
 
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
	staff *pNext;
};

struct schoolYear{
	struct courses{
		string startDate;
		string endDate;
		int ID;
	};
};

int main()//this is just a test
{
	staff *pFirst=new staff;
	cin>>pFirst->userName;
	cout<<pFirst->userName;
	
	return 0;
}
