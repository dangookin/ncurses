#include <ncurses.h>

int main()
{
	initscr();

	attrset(A_ALTCHARSET);
	addstr("Hello there!");
	refresh();
	getch();

	endwin();
	return(0);
}
