#include <ncurses.h>

int main()
{
	const int size=32;
	char first[size];
	char last[size];

	initscr();

	addstr("First name: ");
	getnstr(first,size-1);
	addstr("Last name: ");
	getnstr(last,size-1);
	printw("Pleased to meet you, %s %s\n",
			first,
			last);
	refresh();
	getch();

	endwin();
	return(0);
}
