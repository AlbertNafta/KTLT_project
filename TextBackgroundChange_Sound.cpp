#include<windows.h>

void set_color ( int code ) {
    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute( color , code );
}

system ( "color x y");

// x for background and y for text

// add  system("CLS") to reset and change the color

PlaySound(" file name ", NULL, SND_SYNC);


