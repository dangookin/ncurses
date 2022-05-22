#include <ncurses.h>

int main()
{
	char text[] = "Scroll me! ";
	int x;

	initscr();
	
	bkgd('.');
	scrollok(stdscr,TRUE);
	setscrreg(3,LINES-3);

	for(x=0;x<200;x++)
	{
		addstr(text);
		napms(25);
		refresh();
	}
	getch();

	endwin();
	return(0);
}

