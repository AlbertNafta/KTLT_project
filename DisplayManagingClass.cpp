void DisplayManagingClass(int &rr)
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
	gotoxy(77, 11);
	cout << "Managing...CLASS";
	gotoxy(80, 15);
	cout << "Createclass"; 
	gotoxy(80, 19);
	cout << "View class"; 
	gotoxy(80, 23);
	cout << "Edit class"; 
	gotoxy(81, 27);
	cout << "Exit...";
	
	
	txtColor(5);
	drawF(2, 32, 69, 10);
	txtColor(11);
	drawF(2, 24, 73, 14);
	drawF(2, 24, 73, 18);
	drawF(2, 24, 73, 22);
	drawF(2, 24, 73, 26);

	
	drawF(2, 2, 75+24, 14);
	drawF(2, 2, 75+24, 18);
	drawF(2, 2, 75+24, 22);
	drawF(2, 2, 75+24, 26);


	int i=2;
	rr=15;
	gotoxy(100,rr);
	while(i!=0)
	{
		char move;
		move=_getch();
		if(move=='s'){rr+=4;if(rr>27)rr=27;gotoxy(100,rr);}
		if(move=='w'){rr-=4;if(rr<14)rr=15;gotoxy(100,rr);}
		if(move=='/'){return;}
	}
}
