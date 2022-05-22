#include <ncurses.h>

int main()
{
	WINDOW *grandpa,*father,*son;
	int gl,gc;

	initscr();
	refresh();	/* update stdscr */

	/* set colors */
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_RED,COLOR_YELLOW);
	init_pair(3,COLOR_BLACK,COLOR_GREEN);

	/* create windows */
	grandpa = newwin(LINES-4,COLS-10,2,5);
	getmaxyx(grandpa,gl,gc);
	father = derwin(grandpa,gl/2,gc,gl/2,0);
	son = derwin(father,gl/2,3,0,(gc-4)/2);

	/* color windows and splash some text */
	wbkgd(grandpa,COLOR_PAIR(1));
	waddstr(grandpa,"I am Grandpa\n");
	wbkgd(father,COLOR_PAIR(2));
	waddstr(father,"I am Father\n");
	wclrtobot(father);
	wbkgd(son,COLOR_PAIR(3));
	waddstr(son,"I am the boy\n");
	wrefresh(grandpa);
	getch();

	endwin();
	return(0);
}

