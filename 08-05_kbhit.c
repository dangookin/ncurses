#include <ncurses.h>

/* check the keyboard queue */
int kbhit()
{
	int ch,r;

/* turn off blocking and echo */
	nodelay(stdscr,TRUE);
	noecho();

/* check for input */	
	ch = getch();
	if( ch == ERR)		/* no input */
		r = FALSE;
	else				/* input */
	{
		r = TRUE;
		/* return key to queue */
		ungetch(ch);
	}

/* restore block and echo */
	echo();
	nodelay(stdscr,FALSE);
	return(r);
}
		
int main()
{
	int x;

	initscr();

	addstr("Tap a key while I count...\n");
	for(x=1;x<21;x++)
	{
		printw("%2d ",x);
		refresh();
		napms(500);
		if(kbhit())
			break;
	}
	addstr("\nDone!\n");
	printw("You pressed the '%c' key\n",getch());
	refresh();
	getch();

	endwin();
	return(0);
}

