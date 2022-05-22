#include <ncurses.h>

int main()
{
	WINDOW *red,*blue;
	int x;

	initscr();
	refresh();

	/* colors */
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_RED);
	init_pair(2,COLOR_WHITE,COLOR_BLUE);

	/* create windows */
	red = newwin(10,24,2,22);
	blue = newwin(10,24,5,32);
	if( red==NULL || blue==NULL)
	{
		endwin();
		puts("Unable to create windows");
		return(1);
	}

	/* color and fill windows */
	wbkgd(red,COLOR_PAIR(1));
	wbkgd(blue,COLOR_PAIR(2));
	for(x=0;x<30;x++)
	{
		waddstr(red,"o e l y ");
		waddstr(blue," r a   v");
	}
	wrefresh(red);
	wrefresh(blue);
	getch();

	/* overlay windows */
	overlay(red,blue);
	wrefresh(blue);
	getch();

	endwin();
	return(0);
}
