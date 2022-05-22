#include <ncurses.h>

int main()
{
	WINDOW *red,*blue;

	initscr();
	refresh();

	/* colors */
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_BLUE);

	/* create windows */
	red = newwin(10,20,2,22);
	blue = newwin(10,20,5,32);
	if( red==NULL || blue==NULL)
	{
		endwin();
		puts("Unable to create windows");
		return(1);
	}

	/* color and fill windows */
	wbkgd(red,COLOR_PAIR(1) | 'r');
	wbkgd(blue,COLOR_PAIR(2) | 'b');
	wrefresh(red);
	wrefresh(blue);
	getch();

	/* overwrite windows */
	overwrite(red,blue);
	wbkgd(red,COLOR_PAIR(1) | ' ');
	wrefresh(red);
	wrefresh(blue);
	getch();

	endwin();
	return(0);
}
