#include <ncurses.h>

int main()
{
	int y;

	initscr();

	scrollok(stdscr,TRUE);
	for(y=0;y<=LINES;y++)
			mvprintw(y,0,"Line %d",y);
	refresh();
	getch();
	
	scrl(3);
	refresh();
	getch();

	endwin();
	return(0);
}
