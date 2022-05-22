#include <ncurses.h>

int main()
{
	WINDOW *sub;
	char text[] = "Scroll away! ";
	int x;

	initscr();

	sub = subwin(stdscr,10,30,6,24);
	scrollok(sub,TRUE);
	for(x=0;x<35;x++)
	{
		waddstr(sub,text);
		napms(50);
		wrefresh(sub);
	}
	getch();

	endwin();
	return(0);
}
