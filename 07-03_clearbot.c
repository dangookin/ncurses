#include <ncurses.h>

int main()
{
	int c,y,x,cmax;

	initscr();
		
	getmaxyx(stdscr,y,x);
	cmax = (x * y) / 5;
	for(c=0;c<cmax;c++)
		addstr("blah ");
	refresh();
	getch();

	move(5,20);		/* Setup the cursor */
	clrtobot();		/* Clear to bottom */
	refresh();
	getch();

	endwin();
	return(0);
}

