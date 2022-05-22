#include <ncurses.h>

int main()
{
	char name[32];
	int ch;

	initscr();

	do
	{
		clear();
		addstr("Enter your name: ");
		getnstr(name,31);
		move(1,0);
		printw("Your name is %s. ",name);
		printw("Is this correct? ");
		ch = getch();
	} while( ch != 'y');
	move(2,0);
	printw("Pleased to meet you, %s\n",name);
	getch();

	endwin(); 
	return(0);
}
