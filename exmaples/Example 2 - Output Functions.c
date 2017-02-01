#include<ncurses.h>
#include<string.h>

int main()
{
  char str[]="Ncurses Cheatsheet";
  int y,x;

  initscr();//initialize cursor mode
  raw();//disable inline buffering
  noecho();//echo swtiched off

  getmaxyx(y,x);//get the number of rows and columns
  mvprintw(y/2,(x-strlen(str))/2,"%s",str);//print string in the center of the screen

  refresh();//update window
  getch();//get a character without echo
  endwin();//end cursor mode
  return 0;
}
