#include <ncurses.h>

int main()
{
	initscr();

	addch(A_ALTCHARSET | ACS_PI);
	addstr(" = 3.14159");
	refresh();
	getch();

	endwin();
	return(0);
}
