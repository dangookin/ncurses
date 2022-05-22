#include <ncurses.h>

int main()
{
	int key1,key2;

	initscr();

	addstr("Type a key: ");
	refresh();
	key1 = getch();
	clear();
	addstr("Type the same key: ");
	noecho();
	key2 = getch();
	move(1,0);
	if( key1 == key2 )
		addstr("The keys match");
	else
		addstr("The keys don't match");
	refresh();
	getch();

	endwin();
	return(0);
}
