#include <ncurses.h>

int main()
{
	initscr();

/* test for color ability of the terminal */
	if(!has_colors())
	{
		endwin();	/* exit Ncurses */
		puts("Terminal cannot do colors");
		return(1);
	}

/* initialize Ncurses colors */
	if(start_color() != OK)
	{
		endwin();
		puts("Unable to start colors.");
		return(1);
	}

/* colors are okay; continue */
	printw("Colors initialized.\n");
	printw("%d colors available.\n",COLORS);
	printw("%d color pairs.",COLOR_PAIRS);
	refresh();
	getch();

	endwin();
	return(0);
}
