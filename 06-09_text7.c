#include <ncurses.h>

int main()
{
	int x;

	initscr();

	addstr("This is the first line\n");
	addstr("Line two here\n");
	addstr("The third line\n");
	addstr("Fourth line here\n");
	addstr("And the fifth line\n");
	refresh();
	getch();

	move(3,7);
	for(x=0;x<5;x++)
	{
		delch();
		refresh();
		napms(250);
	}
	getch();

	endwin();
	return(0);
} 

