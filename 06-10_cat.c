#include <ncurses.h>

int main()
{
	char ob[] = "taf";
	char *o;
	int x;

	initscr();

	/* display initial string */
	addstr("Where did that silly cat go?");
	refresh();
	getch();

	/* edit out the word 'silly' */
	move(0,15);
	for(x=0;x<5;x++)
	{
		delch();
		refresh();
		napms(250);
	}
	/* and immediately insert the word 'fat' */
	o = ob;
	while(*o)
	{
		insch(*o);
		o++;
		refresh();
		napms(250);
	}
	getch();

	endwin();
	return(0);
}
