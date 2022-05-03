void createCourse(courses *&head,timeTable &time)
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
		
	courses *pC=head;
	while(pC->jump!=NULL)pC=pC->jump;
	pC->jump=new courses;
	pC=pC->jump;
	
	txtColor(7);
	gotoxy(76, 11);
	cout << "Creating...COURSE";
	txtColor(5);
	drawF(2, 32, 69, 10);
		
	txtColor(11);
	gotoxy(60, 19);
	txtColor(7);
	cout<<"Course name";
	txtColor(11);
	drawF(2, 13, 59, 18);
	drawF(2, 37, 75, 18);
	string username;
	gotoxy(77,19);
	txtColor(7);
	cin>>pC->name;
	
	txtColor(11);
	gotoxy(60, 24);
	txtColor(7);
	cout<<"Course ID";
	txtColor(11);
	drawF(2, 13, 59, 23);
	drawF(2, 37, 75, 23);
	gotoxy(77, 24);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 24);
	cin>>pC->ID;
	
	txtColor(11);
	gotoxy(60, 29);
	txtColor(7);
	cout<<"Teachername";
	txtColor(11);
	drawF(2, 13, 59, 28);
	drawF(2, 37, 75, 28);
	gotoxy(77, 29);
	txtColor(7);
	cout << "                       ";
	gotoxy(77, 29);
	cin>>pC->teacher;
	
	txtColor(11);
	gotoxy(60, 34);
	txtColor(7);
	cout<<"Lessons's value";
	txtColor(11);
	drawF(2, 18, 59, 33);
	drawF(2, 33, 80, 33);
	gotoxy(77, 34);
	txtColor(7);
	gotoxy(82, 34);
	cin>>pC->nums;
	
	txtColor(11);
	gotoxy(60, 39);
	txtColor(7);
	cout<<"Credit's value";
	txtColor(11);
	drawF(2, 18, 59, 38);
	drawF(2, 33, 80, 38);
	gotoxy(82, 39);
	txtColor(7);
	
	gotoxy(82, 39);
	cin>>pC->credits;
	
	txtColor(11);
	gotoxy(60, 44);
	txtColor(7);
	cout<<"StartDate";
	txtColor(11);
	drawF(2, 13, 59, 43);
	drawF(2, 37, 75, 43);
	gotoxy(77, 44);
	txtColor(7);
	gotoxy(77, 44);
	cin>>pC->startDate;
	
	txtColor(11);
	gotoxy(62, 49);
	txtColor(7);
	cout<<"EndDate: ";
	txtColor(11);
	drawF(2, 13, 59, 48);
	drawF(2, 37, 75, 48);
	gotoxy(77, 49);
	txtColor(7);
	gotoxy(77, 49);
	cin>>pC->endDate;
	
	pC->numberStu=0;
	int day,sess;
			for(int i=0;i<=1;i++){
			txtColor(11);
			gotoxy(60, 54+i*10);
			txtColor(7);
			cout<<"It will be taught on what day (2->7) ?";
			txtColor(11);
			drawF(2, 40, 59, 53+i*10);
			drawF(2, 9, 103, 53+i*10);
			gotoxy(77, 49);
			txtColor(7);
			gotoxy(105, 54+i*10);	
			cin>>day;
			
			txtColor(11);
			gotoxy(62, 59+i*10);
			txtColor(7);
			cout<<"And on what session (1->4) ? "	;
			txtColor(11);
			drawF(2, 37, 59, 58+i*10);
			drawF(2, 12, 100, 58+i*10);
			gotoxy(77, 49);
			txtColor(7);
			gotoxy(102, 59+i*10);	
			
			cin>>sess;
			time.week[sess-1][day-2]=pC->ID;
			
			}	
}
