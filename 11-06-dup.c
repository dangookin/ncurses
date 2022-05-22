#include <ncurses.h>

int main()
{
	WINDOW *fred,*barney;

	initscr();
	refresh();

	/* Build window & wait */
	fred = newwin(0,0,0,0);
	waddstr(fred,"This is Fred.\n");
	wrefresh(fred);
	getch();

	/* Create and show barney */
	barney = dupwin(fred);
	waddstr(barney,"This is Barney.\n");
	wrefresh(barney);
	getch();

	/* Go back to fred */
	waddstr(fred,"Nice to see you!\n");
	wrefresh(fred);
	getch();

	/* One more time to barney */
	waddstr(barney,"You too!\n");
	touchwin(barney);
	wrefresh(barney);
	getch();

	endwin();
	return(0);
}

