#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

// Function Animation - Delay
void delay(void) {
	int delay;
	delay = 1;
	while(delay<10000000){
	delay++;
	};
}

// Function gotoxy
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main() {
	int i,j;
	char ulang;
	
	for(i = 40; i <= 75; i++) {
		gotoxy(i, 12);
		system("color 3");
		printf("-");
		gotoxy(i, 14);
		printf("-");
		delay();
	}	
	
	for(i = 1; i <= 100; i++) {
		gotoxy(40,13);
		cout <<"L O A D I N G "<<i<<" %";
		delay();
	}
	
	
	getch();
	return 0;
}
