#include <ncurses.h>

int main()
{
	WINDOW *alpha;

	initscr();
	refresh();

	/* configure color */
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_GREEN);

	/* create window */
	alpha = newwin(7,20,3,10);
	if( alpha==NULL )
	{
		endwin();
		puts("Unable to create window");
		return(1);
	}
	
	/* put text on alpha */
	wbkgd(alpha,COLOR_PAIR(1));
	mvwaddstr(alpha,1,2,"Window Alpha");
	wrefresh(alpha);
	getch();

	/* move window alpha */
	mvwin(alpha,10,43);
	mvwaddstr(alpha,2,2,"Moved!");
	wrefresh(alpha);
	getch();

	endwin();
	return(0);
}
