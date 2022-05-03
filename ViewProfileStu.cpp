void viewStudentPro(student *&pHead_s,string uses)
{
	student *pT2=pHead_s;
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
	cout<<"First name: ";txtColor(11);cout<<pT2->firstName<<endl;txtColor(7);
	cout<<"Last name: ";txtColor(11);cout<<pT2->lastName<<endl;	txtColor(7);
	cout<<"Birthday: ";txtColor(11);cout<<pT2->birth<<endl;txtColor(7);
	cout<<"Gender: ";txtColor(11);cout<<pT2->gender<<endl;txtColor(7);
	cout<<"Social ID: ";txtColor(11);cout<<pT2->social_ID;txtColor(7);
	cout<<endl<<"Do you want to change password ? (y/n)";
	char change;
	cin>>change;
	if(change=='y'||change=='Y')
	{
		string pass;
		cout<<"Type new password: ";
		txtColor(11);
		cin>>pass;
		system("cls");
		string pass2;
		txtColor(7);
		cout<<"Rewrite your password: ";
		txtColor(11);
		cin>>pass2;
		while(pass2.compare(pass)!=0)
		{
			txtColor(7);
			cout<<"Not match! Type again: ";
			txtColor(11);
			cin>>pass2;
		}
		pT2->passWord=pass;
		cout<<"DONE !!!";
		sleep(2);
		system("cls");
		OutputUser(pHead_s);
	}
	cout<<"Press any to continue: ";
	_getch();
}
