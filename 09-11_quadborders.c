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
	/* Don't forget to remove the newlines!
		and offset the text */
	wbkgd(a,COLOR_PAIR(1));
	box(a,0,0);
	mvwaddstr(a,1,1,"This is window A");
	wbkgd(b,COLOR_PAIR(2));
	box(b,0,0);
	mvwaddstr(b,1,1,"This is window B");
	wbkgd(c,COLOR_PAIR(3));
	box(c,0,0);
	mvwaddstr(c,1,1,"This is window C");
	wbkgd(d,COLOR_PAIR(4));
	box(d,0,0);
	mvwaddstr(d,1,1,"This is window D");
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
