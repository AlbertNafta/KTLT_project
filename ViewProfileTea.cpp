void viewTeacherPro(staff *&pHead_t,string uses)
{
	system("cls");
	txtColor(7);
	staff *pT2=pHead_t;
					while(pT2!=NULL)
					{
						if(pT2->userName.compare(uses)==0)
						{
							break;
						}
						pT2=pT2->pNext;
					}
	system("cls");
	cout<<"Username: ";txtColor(11);cout<<pT2->userName<<endl;txtColor(7);
	cout<<"Password: ";txtColor(11);cout<<pT2->passWord<<endl;txtColor(7);
	cout<<"Real name: ";txtColor(11);cout<<pT2->name<<endl;txtColor(7);
	cout<<"Major: ";txtColor(11);cout<<pT2->majors;txtColor(7);
	cout<<"Age: ";txtColor(11);cout<<pT2->age<<endl;txtColor(7);
	cout<<endl<<"Do you want to change password ? (y/n)";
	char change;
	cin>>change;
	if(change=='y'||change=='Y')
	{
		string pass;
		cout<<"Type new password: ";
		txtColor(11);
		cin>>pass;
		txtColor(7);
		system("cls");
		string pass2;
		cout<<"Rewrite your password: ";
		txtColor(11);
		cin>>pass2;
		txtColor(7);
		while(pass2.compare(pass)!=0)
		{
			cout<<"Not match! Type again: ";
			txtColor(11);
			cin>>pass2;
			txtColor(7);
		}
		pT2->passWord=pass;
		cout<<"DONE !!!";
		sleep(2);
		system("cls");
		OutputStaff(pHead_t,0);
	}
	cout<<"Press any to continue: ";
	_getch();
	
}
