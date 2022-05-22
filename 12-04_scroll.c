#include <ncurses.h>

int main()
{
	int y;

	initscr();

	/* enable scrolling */
	scrollok(stdscr,TRUE);

	/* place junk on the screen */
	for(y=0;y<LINES;y++)
		mvprintw(y,0,"%2d",y);
	refresh();
	getch();

	/* scroll up one line */
	scroll(stdscr);
	refresh();
	getch();

	endwin();
	return(0);
}
