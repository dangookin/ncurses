#include <ncurses.h>

int main()
{
	WINDOW *sub;

	initscr();

	/* create subwindow on stdscr */
	sub = subwin(stdscr,LINES-2,COLS-2,1,1);
	if( sub==NULL)
	{
		endwin();
		puts("Unable to create subwindow");
		return(1);
	}

	/* draw a box around stdscr */
	box(stdscr,0,0);
	/* put text to the subwindow */
	waddstr(sub,"I'm in a subwindow.\n");
	refresh();
	getch();

	endwin();
	return(0);
}
