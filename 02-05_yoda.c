#include <ncurses.h>

int main()
{
	int yoda = 874;
	int ss = 65;

	initscr();
	printw("Yoda is %d years old\n",yoda);
	printw("He has collected %d years",yoda-ss);
	printw(" of Social Security.");
	refresh();
	getch();

	endwin();
	return(0);
}

