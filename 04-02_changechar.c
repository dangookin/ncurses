#include <ncurses.h>

int main()
{
	initscr();

	addch('c');
	addch(A_BOLD | 'a');
	addch(A_REVERSE | 't');
	refresh();
	getch();

	/* replace the 't' with 'r' */
	move(0,2);
	addch('r');
	refresh();
	getch();

	endwin();
	return(0);
}
