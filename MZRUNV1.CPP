//#include "MZRUN/ENGINE.H"
#include "MZRUN/GLOBALS.H"
//using Max
/*#include <windows.h>
#include <iostream>
using namespace std;
void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}*/

int  main() {
	//system("cls");
	clrscr();
	_setcursortype(_NOCURSOR);
	Engine game;
	game.HUD();
	while(!game.getState()) {
		game.drawEngine();
		game.inputEngine();
		game.handleEngine();
	}
	return 0;
}
