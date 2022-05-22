#include <ncurses.h>

int main()
{
	WINDOW *pop,*son;
	int x;
	
	initscr();

	/* create a new pad */
	pop = newpad(50,50);
	if( pop==NULL )
	{
		endwin();
		puts("Unable to create pad");
		return(1);
	}

	/* fill the pad */
	for(x=0;x<50;x++)
		waddstr(pop,"Hello ");

	/* create the subpad */
	son = subpad(pop,10,10,0,0);
	if( son==NULL)
	{
		endwin();
		puts("Unable to create subpad");
		return(1);
	}

	addstr("Press Enter to update");
	refresh();
	getch();

	prefresh(son,0,0,5,5,15,15);
	getch();

	endwin();
	return(0);
}

