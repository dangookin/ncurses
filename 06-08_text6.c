#include <ncurses.h>

int main()
{
	initscr();

	/* add five lines */
	addstr("This is the first line\n");
	addstr("Line two here\n");
	addstr("The third line\n");
	addstr("Fourth line here\n");
	addstr("And the fifth line\n");
	refresh();
	getch();

	/* remove a line*/
	move(2,0);
	deleteln();
	refresh();
	getch();

	endwin();
	return(0);
} 

