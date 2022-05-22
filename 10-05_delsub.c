#include <ncurses.h>

int main()
{
	WINDOW *sub;
	int x;

	initscr();
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_BLUE);

	/* create subwindow */
	sub=subwin(stdscr,LINES-10,COLS-10,4,5);
	if( sub==NULL)
	{
		endwin();
		puts("Unable to create subwindow");
		return(1);
	}

	/* fill windows */
	for(x=0;x<120;x++)
		addstr("standard screen ");
	wbkgd(sub,COLOR_PAIR(1));
	for(x=0;x<200;x++)
		waddstr(sub," sub ");
	refresh();
	wrefresh(sub);
	getch();

	/* delete subwindow */
	delwin(sub);
	mvaddstr(0,0,"Subwindow deleted ");
	refresh();
	getch();

	endwin();
	return(0);
}
