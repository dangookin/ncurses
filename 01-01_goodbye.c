#include <ncurses.h>

int main()
{
	initscr();
	addstr(Goodbye, cruel world!);

	endwin();
	return(0);
}

