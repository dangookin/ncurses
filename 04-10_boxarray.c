#include <ncurses.h>

int main()
{
	char box[] = "lqk\nx x\nmqj\n";

	initscr();

	attrset(A_ALTCHARSET);
	addstr(box);
	refresh();
	getch();

	endwin();
	return(0);
}
