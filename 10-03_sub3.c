#include <ncurses.h>

int main()
{
	WINDOW *sub;

	initscr();

	/* create subwindow on stdscr */
	sub = derwin(stdscr,LINES-2,COLS-2,1,1);
	if( sub==NULL)
	{
		endwin();
		puts("Unable to create subwindow");
		return(1);
	}

	/* draw a box around stdscr */
	box(stdscr,0,0);
	/* put text to the stdscr */
	addstr("I'm writing text\n");
	addstr("to the standard screen.");
	refresh();
	getch();

	wclear(sub);
	wrefresh(sub);
	getch();

	endwin();
	return(0);
}
