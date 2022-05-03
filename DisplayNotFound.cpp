void DisplayNotFound(string *roles,string *userName )
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

	txtColor(15);
	gotoxy(70, 10);
	cout << "     __             _       ";
	gotoxy(70, 11);
	cout << "    / /  ___   __ _(_)_ __  ";
	gotoxy(70, 12);
	cout << "   / /  / _ \\ / _` | | '_ \\ ";
	gotoxy(70, 13);
	cout << "  / /__| (_) | (_| | | | | |";
	gotoxy(70, 14);
	cout << "  \\____/\\___/ \\__, |_|_| |_|";
	gotoxy(70, 15);
	cout << "              |___/         ";

//--right here
	drawF(6,35, 68, 10);
	
	txtColor(11);
	gotoxy(62, 24);
	cout << "Username: ";
	txtColor(11);
	drawF(2, 13, 59, 23);
	
	txtColor(7);
	drawF(2, 41, 65, 19);
	gotoxy(66,20);
	cout<<"! Cannot found that username, do agian !";
	drawF(2, 37, 75, 23);
	gotoxy(70, 28);
	cout << "Press /esc to back to menu... ";
	

	
	string innn;
		gotoxy(77,24);
	cin>>innn;
	*userName=innn;
}
