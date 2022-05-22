#include <ncurses.h>

int main()
{
	int x,y;
	
	initscr();
	
	getmaxyx(stdscr,y,x);
	printw("Window is %d rows, %d columns.\n",
			y,x);
	refresh();
	getch();

	endwin();
	return(0);
}

