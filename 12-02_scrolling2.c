#include <ncurses.h>

int main()
{
	char text[] = "This is some wrapping. ";
	int x;

	initscr();

	scrollok(stdscr,TRUE);
	for(x=0;x<100;x++)
	{
		addstr(text);
		napms(100);
		refresh();
	}
	getch();

	endwin();
	return(0);
}
