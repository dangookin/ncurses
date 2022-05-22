#define _XOPEN_SOURCE_EXTENDED 1
#include <ncurses.h>
#include <locale.h>

int main()
{
	cchar_t heart = {
		A_NORMAL,
		L"\u2665"
	};
	
	/* activate Unicode character set */
	setlocale(LC_CTYPE,"en_US.UTF-8");

	initscr();

	addstr("I ");
	add_wch(&heart);
	addstr(" Ncurses");
	refresh();
	getch();

	endwin();
	return(0);
}
