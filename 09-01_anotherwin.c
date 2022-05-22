#include <ncurses.h>

int main()
{
	WINDOW *another;

	initscr();

	addstr("This is the standard screen\n");
	refresh();
	getch();

	/* create another window */
	another = newwin(0,0,0,0);
	if( another == NULL)
	{
		addstr("Unable to create window");
		refresh();
		getch();
	}
	else
	{
		waddstr(another,"This is another window");
		wrefresh(another);
		wgetch(another);
	}

	endwin();
	return(0);
}
