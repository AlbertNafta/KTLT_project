#include <windows.h>
#include <iostream>
using namespace std;

void drawF(int col, int row, int x, int y);
void gotoxy(int x, int y);
void txtColor(int color);

int main ()
{
	drawF(10,10,0,0);
	return 0;
}
void Display()
{

	
}
void drawF(int col, int row, int x, int y){
	txtColor(7);
	gotoxy(x,y); cout << char(201);
	gotoxy(x+row,y); cout << char(187);
	gotoxy(x,y+col); cout << char(200);
	gotoxy(x+row,y+col); cout << char(188);
	gotoxy(x+1,y);
		for (int i = x+1; i < row; i++) cout << char(205);
	gotoxy(x+1,y+col);
		for (int i = x+1; i < row; i++) cout << char(205);
	/*for (int i = y+1; i < col-2; i++) {
		gotoxy(x,i);
		cout << char(186);
		for (int j = x+1; j < row; j++) cout << " ";
	}
	for (int i = y+1; i < col-2; i++) {
		gotoxy(x+row,i);
		cout << char(186);
		for (int j = x+1; j < row; j++) cout << " ";
	}*/
	
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

