void displayMenuStudent(int &r)
{
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
	
	txtColor(7);
	gotoxy(76, 11);
	cout << "Log in as STUDENT...";
	gotoxy(79, 15);
	cout << "View your class"; 
	gotoxy(79, 19);
	cout << "Manage profile"; 
	gotoxy(76, 23);
	cout << "Course registration"; 
	gotoxy(79, 27);
	cout << "Disregistration";
	gotoxy(81, 31);
	cout << "View score";
	gotoxy(82, 35);
	cout << "Exit...";
	
	txtColor(5);
	drawF(2, 32, 69, 10);
	txtColor(11);
	drawF(2, 24, 73, 14);
	drawF(2, 24, 73, 18);
	drawF(2, 24, 73, 22);
	drawF(2, 24, 73, 26);
	drawF(2, 24, 73, 30);
	drawF(2, 24, 73, 34);
	
	drawF(2, 2, 75+24, 14);
	drawF(2, 2, 75+24, 18);
	drawF(2, 2, 75+24, 22);
	drawF(2, 2, 75+24, 26);
	drawF(2, 2, 75+24, 30);
	drawF(2, 2, 75+24, 34);

	int i=2;
	r=15;
	gotoxy(100,r);
	while(i!=0)
	{
		char move;
		move=_getch();
		if(move=='s'){r+=4;if(r>34)r=35;gotoxy(100,r);}
		if(move=='w'){r-=4;if(r<14)r=15;gotoxy(100,r);}
		if(move=='/'){return;}
	}
}
