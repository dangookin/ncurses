#include <ncurses.h>

int main()
{
	chtype string[] = {
		'H' | A_BOLD, 'e', 'l' | A_REVERSE,
		'l' | A_REVERSE, 'o', '!' | A_UNDERLINE,
		0
	};
	int x = 0;

	initscr();

	while(string[x])
	{
		addch(string[x]);
		x++;
	}
	refresh();
	getch();

	endwin();
	return(0);
}

