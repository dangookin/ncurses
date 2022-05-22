#include <ncurses.h>

int main()
{
	WINDOW *second;

	initscr();
	start_color();

	/* configure colors */
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_WHITE,COLOR_RED);

	/* create the second window */
	second = newwin(0,0,0,0);
	if(second == NULL)
	{
		endwin();
		puts("Unable to create window");
		return(1);
	}
	wbkgd(second,COLOR_PAIR(2));
	waddstr(second,"This is the second window\n");

	/* standard screen */
	bkgd(COLOR_PAIR(1));
	addstr("This is the standard screen\n");
	addstr("Press Enter");
	refresh();
	getch();
	/* show second window */
	wrefresh(second);
	getch();
	/* show standard screen again */
	refresh();
	getch();

	endwin();
	return(0);
}
