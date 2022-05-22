#include <ncurses.h>

int main()
{
	WINDOW *p;
	int x;
	
	initscr();

	/* create a new pad */
	p = newpad(50,100);
	if( p==NULL )
	{
		endwin();
		puts("Unable to create pad");
		return(1);
	}

	/* fill the pad */
	for(x=0;x<500;x++)
		wprintw(p,"%4d",x);

	addstr("Press Enter to update");
	refresh();
	getch();

	prefresh(p,0,0,5,5,16,45);
	getch();

	endwin();
	return(0);
}

