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
	red = newwin(10,24,5,10);
	blue = newwin(10,24,5,40);
	if( red==NULL || blue==NULL)
	{
		endwin();
		puts("Unable to create windows");
		return(1);
	}

	/* color and fill windows */
	wbkgd(red,COLOR_PAIR(1));
	wbkgd(blue,COLOR_PAIR(2));
	for(x=0;x<34;x++)
	{
		waddstr(red,"red    ");
		waddstr(blue,"   blue");
	}
	wrefresh(red);
	wrefresh(blue);
	getch();

	/* copy window */
	copywin(red,blue,0,0,1,4,5,10,TRUE);
	wrefresh(blue);
	getch();

	endwin();
	return(0);
}
