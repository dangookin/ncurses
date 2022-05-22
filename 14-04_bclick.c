#include <ncurses.h>

int main()
{
	MEVENT mort;
	int ch;
	
	initscr();
	noecho();
	keypad(stdscr,TRUE);

	mousemask(ALL_MOUSE_EVENTS,NULL);

	while(1)
	{
		ch = getch();
		if( ch == KEY_MOUSE )
		{
			clear();
			getmouse(&mort);
			switch(mort.bstate)
			{
				case BUTTON1_PRESSED:
					mvaddstr(0,0,"B1 Press");
					break;
				case BUTTON1_RELEASED:
					mvaddstr(1,0,"B1 Release");
					break;
				case BUTTON1_CLICKED:
					mvaddstr(2,0,"B1 Click");
					break;
				case BUTTON1_DOUBLE_CLICKED:
					mvaddstr(3,0,"B1 2xClick");
					break;
				case BUTTON2_PRESSED:
					mvaddstr(0,20,"B2 Press");
					break;
				case BUTTON2_RELEASED:
					mvaddstr(1,20,"B2 Release");
					break;
				case BUTTON2_CLICKED:
					mvaddstr(2,20,"B2 Click");
					break;
				case BUTTON2_DOUBLE_CLICKED:
					mvaddstr(3,40,"B2 2xClick");
					break;
				case BUTTON3_PRESSED:
					mvaddstr(0,40,"B3 Press");
					break;
				case BUTTON3_RELEASED:
					mvaddstr(1,40,"B3 Release");
					break;
				case BUTTON3_CLICKED:
					mvaddstr(2,40,"B3 Click");
					break;
				case BUTTON3_DOUBLE_CLICKED:
					mvaddstr(3,40,"B3 2xClick");
					break;
				default:
					break;
			}
			refresh();
			continue;
		}
		if( ch == '\n' )
			break;
	}
	
	endwin();
	return(0);
}

