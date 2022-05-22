#include <ncurses.h>

int main()
{
	initscr();
	addstr("Goodbye, cruel world!");
	refresh();
	getch();

	endwin();
	return(0);
}

