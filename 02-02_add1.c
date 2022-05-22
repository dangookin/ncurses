#include <ncurses.h>
 
int main()
{
	char text[] = "Greetings from Ncurses!";
	char *t;

	initscr();			/* initialize NCurses */
	t = text;			/* initialize the pointer */

	while(*t)			/* loop through the string */
	{
		addch(*t);		/* one char to output */
		t++;			/* increment the pointer */
		refresh();		/* update the screen */
		napms(100);		/* delay .1 sec */
	}
	getch();			/* wait here */

	endwin();			/* clean up NCurses */	
	return(0);
}

