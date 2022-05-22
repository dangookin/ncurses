#include <ncurses.h>

int main()
{
	initscr();

	attrset(A_STANDOUT);
	addstr("This is A_STANDOUT\n");
	attrset(A_UNDERLINE);
	addstr("This is A_UNDERLINE\n");
	attrset(A_REVERSE);
	addstr("This is A_REVERSE\n");
	attrset(A_BLINK);
	addstr("This is A_BLINK\n");
	attrset(A_DIM);
	addstr("This is A_DIM\n");
	attrset(A_BOLD);
	addstr("This is A_BOLD\n");
	attrset(A_ALTCHARSET);
	addstr("This is A_ALTCHARSET\n");
	attrset(A_INVIS);
	addstr("This is A_INVIS\n");
	attrset(A_PROTECT);
	addstr("This is A_PROTECT\n");
	attrset(A_HORIZONTAL);
	addstr("This is A_HORIZONTAL\n");
	attrset(A_LEFT);
	addstr("This is A_LEFT\n");
	attrset(A_LOW);
	addstr("This is A_LOW\n");
	attrset(A_RIGHT);
	addstr("This is A_RIGHT\n");
	attrset(A_TOP);
	addstr("This is A_TOP\n");
	attrset(A_VERTICAL);
	addstr("This is A_VERTICAL\n");

	refresh();
	getch();

	endwin();
	return(0);
}
