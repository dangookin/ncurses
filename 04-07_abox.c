#include <ncurses.h>

int main()
{
	initscr();

	addch(ACS_ULCORNER);
	addch(ACS_HLINE);
	addch(ACS_URCORNER);
	addch('\n');
	addch(ACS_VLINE);
	addch(' ');
	addch(ACS_VLINE);
	addch('\n');
	addch(ACS_LLCORNER);
	addch(ACS_HLINE);
	addch(ACS_LRCORNER);
	addch('\n');
	refresh();
	getch();

	endwin();
	return(0);
}
