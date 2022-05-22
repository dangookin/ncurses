#include <ncurses.h>

int main()
{
	char name[32];
	char password[32];

	initscr();

	addstr("Name: ");
	getnstr(name,32);
	/* disable text output */
	noecho();
	addstr("Password: ");
	getnstr(password,31);
	/* enable text output */
	echo();
	printw("%s's password is '%s'\n",
			name,
			password);
	refresh();
	getch();

	endwin();
	return(0);
}
