#include <ncurses.h>

int main()
{
	WINDOW *quartersub;
	int slines,scols,sposy,sposx;

	initscr();

	/* subwindow location math */
	slines = LINES/2;
	scols = COLS/2;
	sposy = (LINES-slines)/2;
	sposx = (COLS-scols)/2;

	/* create subwindow */
	quartersub=subwin(stdscr,slines,scols,sposy,sposx);
	if( quartersub==NULL)
	{
		endwin();
		puts("Unable to create subwindow");
		return(1);
	}

	/* add text */
	addstr("This is the standard screen");
	waddstr(quartersub,"This is the subwindow");
	refresh();
	getch();

	endwin();
	return(0);
}
