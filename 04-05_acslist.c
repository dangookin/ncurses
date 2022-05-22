#include <ncurses.h>

int main()
{
	int a;

	initscr();

	for(a=0;a<127;a++)
	{
		printw("\t%2X:",a);
		addch(A_ALTCHARSET | a);
	}
	refresh();
	getch();

	endwin();
	return(0);
}
