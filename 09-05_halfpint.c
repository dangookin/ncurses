#include <ncurses.h>

int main()
{
	WINDOW *tiny;

	initscr();
	start_color();

	/* configure colors */
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_WHITE,COLOR_RED);

	/* create the tiny window */
	tiny = newwin(
			LINES/2,
			COLS/2,
			LINES/4,
			COLS/4);
	if(!tiny)
	{
		endwin();
		puts("Unable to create window");
		return(1);
	}
	wbkgd(tiny,COLOR_PAIR(2));
	waddstr(tiny,"This is a tiny window\n");

	/* standard screen */
	bkgd(COLOR_PAIR(1));
	addstr("This is the standard screen\n");
	addstr("Press Enter");
	refresh();
	getch();
	/* show second window */
	wrefresh(tiny);
	getch();
	/* show standard screen again */
	touchwin(stdscr);
	refresh();
	getch();

	endwin();
	return(0);
}
