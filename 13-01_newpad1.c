#include <ncurses.h>

int main()
{
	WINDOW *p;
	
	initscr();

	/* create a new pad */
	p = newpad(50,100);
	if( p==NULL )
	{
		endwin();
		puts("Unable to create pad");
		return(1);
	}

	addstr("New pad created");
	refresh();
	getch();

	endwin();
	return(0);
}

