#include <ncurses.h>

int main()
{
	char ch='\0';			/* initialize ch */
	int row,col;

	initscr();

	addstr("Type some text; '~' to end:\n");
	refresh();

	while( (ch=getch()) != '~')
		;

	getyx(stdscr,row,col);
	printw("\n\nThe cursor was at position %d, %d "
			,row,col);
	printw("when you stopped typing.");
	refresh();
	getch();

	endwin();
	return(0);
}

