void DisplaySignUpforStudent(student *&pHead_s)
{
	student *pS=pHead_s;
	while(pS->pNext!=NULL){
				pS=pS->pNext;
				}
					pS->pNext=new student;
					pS=pS->pNext;
	txtColor(11);
	gotoxy(60, 1);
	cout << "  8888888b.                   888             888 ";
	gotoxy(60, 2);
	cout << "  888   Y88b                  888             888 ";
	txtColor(3);
	gotoxy(60, 3);
	cout << "  888    888                  888             888 ";
	gotoxy(60, 4);
	cout << "  888   d88P  .d88b.  888d888 888888  8888b.  888 ";
	gotoxy(60, 5);
	cout << "  8888888P\"  d88\"\"88b 888P\"   888        \"88b 888 ";
	txtColor(1);
	gotoxy(60, 6);
	cout << "  888        888  888 888     888    .d888888 888 ";
	gotoxy(60, 7);
	cout << "  888        Y88..88P 888     Y88b.  888  888 888 ";
	gotoxy(60, 8);
	cout << "  888         \"Y88P\"  888      \"Y888 \"Y888888 888 ";
	gotoxy(60, 9);
	cout << "                                                  ";  

	txtColor(11);
	gotoxy(70, 10);
	cout << "     __             _       ";
	gotoxy(70, 11);
	cout << "  Sign up | Sign up | Sign up";
	gotoxy(70, 12);
	cout << "  Sign up | Sign up | Sign up";
	gotoxy(70, 13);
	cout << "  Sign up | Sign up | Sign up";
	gotoxy(70, 14);
	cout << "  Sign up | Sign up | Sign up";
	gotoxy(70, 15);
	cout << "  Sign up | Sign up | Sign up";

//--right here
	txtColor(7);
	drawF(6,35, 68, 10);
		
	txtColor(11);
	gotoxy(62, 19);
	txtColor(7);
	cout << "Username: ";
	txtColor(11);
	drawF(2, 13, 59, 18);
	drawF(2, 37, 75, 18);
	string username;
	gotoxy(77,19);
	txtColor(7);
	cin>>pS->userName;
	student *pS2=pHead_s;
	while(pS2!=pS)
	{
		
		if(pS2->userName.compare(pS->userName)==0){				
	//if meet
	
	gotoxy(77, 24);
	txtColor(7);
	cout << "UserName taken !!! ";
	txtColor(11);
	gotoxy(62, 19);
	txtColor(7);
	cout << "Username: ";
	txtColor(11);
	drawF(2, 13, 59, 18);
	drawF(2, 37, 75, 18);
	
	gotoxy(77,19);
	cout<<"                         ";//clean
	txtColor(7);
	gotoxy(77,19);
	cin>>pS->userName;
	pS2=pHead_s;
		}
	pS2=pS2->pNext;
	}
	
	txtColor(11);
	gotoxy(62, 24);
	txtColor(7);
	cout << "Password: ";
	txtColor(11);
	drawF(2, 13, 59, 23);
	drawF(2, 37, 75, 23);
	gotoxy(77, 24);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 24);
	string password;
	cin>>pS->passWord;
	
	txtColor(11);
	gotoxy(62, 29);
	txtColor(7);
	cout << "Lastname: ";
	txtColor(11);
	drawF(2, 13, 59, 28);
	drawF(2, 37, 75, 28);
	gotoxy(77, 29);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 29);
	string lastName;
	cin>>pS->lastName;

	txtColor(11);
	gotoxy(62, 34);
	txtColor(7);
	cout << "Firstname: ";
	txtColor(11);
	drawF(2, 13, 59, 33);
	drawF(2, 37, 75, 33);
	gotoxy(77, 34);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 34);
	string firstName;
	cin>>pS->firstName;
	
	txtColor(11);
	gotoxy(62, 39);
	txtColor(7);
	cout << "Gender: ";
	txtColor(11);
	drawF(2, 13, 59, 38);
	drawF(2, 37, 75, 38);
	gotoxy(77, 39);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 39);
	string gender;
	cin>>pS->gender;

	txtColor(11);
	gotoxy(62, 44);
	txtColor(7);
	cout << "Birthdate: ";
	txtColor(11);
	drawF(2, 13, 59, 43);
	drawF(2, 37, 75, 43);
	gotoxy(77, 44);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 44);
	string date;
	cin>>pS->birth;		

	txtColor(11);
	gotoxy(62, 49);
	txtColor(7);
	cout << "Social ID: ";
	txtColor(11);
	drawF(2, 13, 59, 48);
	drawF(2, 37, 75, 48);
	gotoxy(77, 49);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 49);
	int ID;
	cin>>pS->social_ID;
	pS->pNext=NULL;
	system("cls");
	cout<<"DONE !!!";
	sleep(1);
	system("cls");
}