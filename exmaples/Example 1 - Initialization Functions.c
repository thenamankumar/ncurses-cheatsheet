#include<ncurses.h>

int main()
{
	initscr();//initialize cursor mode
	raw();//disable inline buffering
	noecho();//echo swtiched off
	keypad(stdscr,TRUE);//function keys reading enabled

	printw("Check the working of function keys. Press!");//print to window
	refresh();//update window

	int i, ch=getch();//get char without echo as noecho used

	for(i=1;i<=12;i++)
	{
		if(ch==KEY_F(i))//can read function keys as enabled by keypad
		{
			printw("\n\'F%d\' key pressed", i);
			break;
		}
	}

	if(i==13)
		printw("\n\'%c\' key pressed", ch);

	refresh();

	getch();
	endwin();//end cursor mode
	return 0;
}