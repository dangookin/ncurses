#include <ncurses.h>

int main()
{
	initscr();

	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	bkgd(COLOR_PAIR(1));
	refresh();
	getch();

	endwin();
	return(0);
}

