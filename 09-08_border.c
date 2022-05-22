#include <ncurses.h>

int main()
{
	initscr();

	border(0,0,0,0, 0,0,0,0);
	move(1,1);
	addstr("Now that's a swell border!\n");
	refresh();
	getch();

	endwin();
	return(0);
}
