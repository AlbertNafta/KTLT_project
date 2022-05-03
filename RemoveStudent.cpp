void removeStudentFromClass(classes *&pHead_c,student *&pHead_s)
{
	system("cls");
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
	
	string className;
	txtColor(11);
	gotoxy(61, 19);
	txtColor(7);
		cout<<"Class name: ";
	txtColor(11);
	drawF(2, 13, 59, 18);
	drawF(2, 37, 75, 18);

	gotoxy(77,19);
	txtColor(7);
	cin>>className;
		classes *pS=pHead_c;
		while(className.compare(pS->className)!=0)
			{
				pS=pS->pDoor;
				if(pS==NULL)
				{
											gotoxy(77, 24);
						txtColor(7);
						cout << "No such class !!! ";
						txtColor(11);
						gotoxy(61, 19);
						txtColor(7);
						cout << "Class name: ";
						txtColor(11);
						drawF(2, 13, 59, 18);
						drawF(2, 37, 75, 18);
						
						gotoxy(77,19);
						cout<<"                         ";//clean
						txtColor(7);
						gotoxy(77,19);
						cin>>className;
					pS=pHead_c;
				}
			}
txtColor(11);
	gotoxy(60, 24);
	txtColor(7);
	cout << "Student's ID:";
	txtColor(11);
	drawF(2, 13, 59, 23);
	drawF(2, 37, 75, 23);
	gotoxy(77, 24);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 24);
	int ID,here;
	cin>>ID;
		student *pC=pHead_s;
		int granted=0;
		while(granted==0){
		
			while(ID!=pC->social_ID)
				{
					pC=pC->pNext;
					if(pC==NULL)
					{
						gotoxy(77, 28);
						txtColor(7);
						cout << "No such student !!! ";
						txtColor(11);
						gotoxy(60, 24);
						txtColor(7);
						cout << "Student's ID:";
						txtColor(11);
						drawF(2, 13, 59, 23);
						drawF(2, 37, 75, 23);
						
						gotoxy(77,24);
						cout<<"                         ";//clean
						txtColor(7);
						gotoxy(77,24);
						cin>>ID;
						pC=pHead_s;
					}
				}
			int no=0;
			for(int a=0;a<pS->number;a++)
			{
				if(pS->student[a]==ID)
				{
					no=0;
					here=a;
					break;
				}
				if(a==pS->number-1)
				{
				
						gotoxy(70, 28);
						txtColor(7);
						cout << "This student is not in class !!! ";
						txtColor(11);
						gotoxy(60, 24);
						txtColor(7);
						cout << "Student's ID:";
						txtColor(11);
						drawF(2, 13, 59, 23);
						drawF(2, 37, 75, 23);
						
						gotoxy(77,24);
						cout<<"                         ";//clean
						txtColor(7);
						gotoxy(77,24);
						cin>>ID;
					no=1;
					a=0;
					break;
				}
				

			}
			if(no==0)granted=1;
			
		}
		pS->number-=1;
		for(int n=0;n<70;n++)
		{
			pS->student[here+n]=pS->student[here+n+1];
			if(pS->student[here+n+2]=='\0'){
				pS->student[here+n+1]=='\0';
				break;
			}
		}
		system("cls");
		cout<<"DONE !!!";
		sleep(2);
}


