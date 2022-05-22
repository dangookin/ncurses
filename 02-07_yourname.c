#include <ncurses.h>

int main()
{
	char first[32];
	char last[32];

	initscr();
	addstr("What is your first name? ");
	refresh();
	getnstr(first,31);

	addstr("What is your last name? ");
	refresh();
	getnstr(last,31);

	printw("Pleased to meet you, %s %s!",first,last);
	refresh();
	getch();

	endwin();
	return(0);
}

