#include <ncurses.h>

int main()
{
	WINDOW *a,*b,*c,*d;
	int maxx,maxy,halfx,halfy;

	/* initialize stuff */
	initscr();
	refresh();
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_BLUE);
	init_pair(2,COLOR_BLACK,COLOR_RED);
	init_pair(3,COLOR_BLACK,COLOR_GREEN);
	init_pair(4,COLOR_BLACK,COLOR_CYAN);

	/* calculate window sizes and locations */
	getmaxyx(stdscr,maxy,maxx);
	halfx = maxx >> 1;
	halfy = maxy >> 1;

	/* create four quarter windows */
	a = newwin(halfy,halfx,0,0);
	b = newwin(halfy,halfx,0,halfx);
	c = newwin(halfy,halfx,halfy,0);
	d = newwin(halfy,halfx,halfy,halfx);
	if( a==NULL || b==NULL || c==NULL || d==NULL)
	{
		endwin();
		puts("Some kind of error creating the windows");
		return(1);
	}

	/* Write to each window */
	wbkgd(a,COLOR_PAIR(1));
	mvwaddstr(a,0,0,"This is window A\n");
	wbkgd(b,COLOR_PAIR(2));
	mvwaddstr(b,0,0,"This is window B\n");
	wbkgd(c,COLOR_PAIR(3));
	mvwaddstr(c,0,0,"This is window C\n");
	wbkgd(d,COLOR_PAIR(4));
	mvwaddstr(d,0,0,"This is window D\n");
	/* update the windows */
	wrefresh(a);
	wrefresh(b);
	wrefresh(c);
	wrefresh(d);
	/* pause */
	getch();

	endwin();
	return(0);
}
