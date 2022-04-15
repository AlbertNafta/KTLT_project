#include <windows.h>
#include <iostream>
using namespace std;

void drawF(int col, int row, int x, int y);
void gotoxy(int x, int y);
void txtColor(int color);
void Display();
void nameDisplay();
void displayStudent();

int main()
{
	displayStudent();

	return 0;
}
void Display()
{
	nameDisplay();
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

	drawF(6,35, 68, 10);
	
	txtColor(11);
	gotoxy(62, 20);
	cout << "Username: ";
	gotoxy(62, 24);
	cout << "Password: ";
	txtColor(11);
	drawF(2, 13, 59, 19);
	drawF(2, 13, 59, 23);
	
	txtColor(7);
	drawF(2, 37, 75, 19);
	drawF(2, 37, 75, 23);
	gotoxy(70, 28);
	cout << "New to Portal? ";
	gotoxy(87, 28);
	cout << "Creat an account. ";
	drawF(2, 20, 85, 27);

	drawF(38, 170, 0, 0);

}
void nameDisplay() {
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

}
void drawF(int col, int row, int x, int y) {
	gotoxy(x, y); cout << char(201);
	for (int i = x + 1; i < x + row ; i++)
		cout << char(205);
	cout << char(187);
	//gotoxy(x + row, y); cout << char(187);
	//gotoxy(x, y + col); cout << char(200);
	
	for (int i = y + 1; i < y + col; i++) {
		gotoxy(x, i);
		cout << char(186);
		gotoxy(x + row, i);
		cout << char(186);
	}
	gotoxy(x, y + col);
	cout << char(200);
	for (int i = x + 1; i < x + row; i++)
		cout << char(205);
	cout << char(188);
}

void displayStudent() {
	nameDisplay();
	txtColor(7);
	gotoxy(75, 11);
	cout << "Log in as student...";
	gotoxy(79, 15);
	cout << "My courses"; // thoi khoa bieu
	gotoxy(81, 19);
	cout << "Grades"; // xem diem
	gotoxy(82, 23);
	cout <<"Class"; // xem danh sach hoc sinh trong lop
	gotoxy(77, 27);
	cout << "Enroll courses";// dang ki hoc phan	
	gotoxy(81, 31);
	cout << "Profile"; // thong tin hoc sinh
	drawF(2, 17, 75, 14);
	drawF(2, 17, 75, 18);
	drawF(2, 17, 75, 22);
	drawF(2, 17, 75, 26);
	drawF(2, 17, 75, 30);
	drawF(38, 170, 0, 0);
}
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//color
void txtColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
