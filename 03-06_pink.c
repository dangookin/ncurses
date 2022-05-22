#include <ncurses.h>

#define PINK 1

int main()
{
	initscr();

	start_color();
	if(!can_change_color())
		addstr("This probably won't work...\n");

	init_color(PINK,1000,750,750);		/* pink */
	init_pair(1,PINK,COLOR_BLACK);
	attrset(COLOR_PAIR(1));
	printw("This is the new color %d.\n",PINK);
	refresh();
	getch();

	endwin();
	return(0);
} 

