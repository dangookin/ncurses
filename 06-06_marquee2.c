#include <ncurses.h>
#include <string.h>

int main()
{
	char text[] = "Armstrong walks on moon!";
	char *t;
	char a;
	int len;

	initscr();

	/* display a line of text */
	move(5,0);
	for(a='A';a<'Z'+1;a++)
	{
		addch(a);
		addstr("  ");	/* two spaces */
	}

	len = strlen(text);
	t = text;			/* initialize pointer */
	while(len)
	{
		move(5,5);		/* insert same spot */
		insch(*(t+len-1));	/* work backwards */
		refresh();
		napms(100);			/* .1 sec. delay */
		len--;
	}
	getch();

	endwin();
	return(0);
}

