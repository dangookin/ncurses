#include <ncurses.h>

int main()
{
	int lines,cols;

	initscr();
	getmaxyx(stdscr,lines,cols);
	lines--;
	cols--;

	mvaddch(0,0,'*');			/* UL corner */
	refresh();
	napms(500);					/* pause 1/2 sec */

	mvaddch(0,cols,'*');;		/* UR corner */
	refresh();
	napms(500);

	mvaddch(lines,0,'*');		/* LL corner */
	refresh();
	napms(500);

	mvaddch(lines,cols,'*');	/* LR corner */
	refresh();
	getch();

	endwin();
	return(0);
}

