#include <ncurses.h>

int main()
{
	int row,col;

	initscr();

	for(row=0;row<LINES;row++)
		for(col=0;col<COLS;col++)
			addch('.');
	refresh();
	getch();

	move(5,0);
	insdelln(3);
	refresh();
	getch();

	insdelln(-5);
	refresh();
	getch();

	endwin();
	return(0);
}

