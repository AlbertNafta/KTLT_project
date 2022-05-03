void DisplayConfirmSignUp(string *roles2)
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
	txtColor(15);
	drawF(6,35, 68, 10);
	
	txtColor(11);
	gotoxy(75, 29);
	cout << "Sign up ? (y/n): ";
	txtColor(11);
	drawF(2, 17, 74, 28);
	
	txtColor(7);
	gotoxy(66,20);
	txtColor(11);
	
	drawF(2, 2, 92, 28);
	gotoxy(70, 28);
	cout << " ";
	txtColor(7);
	
	sleep(1);
	drawF(2, 41, 65, 19);
	gotoxy(70,20);
	cout<<"Are you REALLY want to sign up ???";
	sleep(1);
	drawF(2, 67, 51, 23);
	gotoxy(53,24);
	cout<<"There is no turning back and the given information must be right!";
	
	
		string in;
		gotoxy(93,29);
	cin>>in;
	*roles2=in;
	if(in.compare("n")==0)return;
	drawF(2, 33, 65, 33);
	gotoxy(66,34);
	cout<<"Sign up as (student or teacher):";
	drawF(2, 8, 100, 33);
	gotoxy(101,34);
	cin>>in;
	*roles2=in;
}
