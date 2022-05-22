#include <ncurses.h>

int main()
{
	int value = 0;

	initscr();

	addstr("Press any key to begin:\n");
	refresh();
	getch();

/* turn off getch() wait */
	nodelay(stdscr,TRUE);
	addstr("Press the Spacebar to stop the loop!\n");
	while(getch() != ' ')
	{
		printw("%d\r",value++);
		refresh();
	}
	
	endwin();
	return(0);
}

