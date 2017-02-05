#A Handy Ncurses Cheatsheet
A handy cheatsheet for programmers working with [ncurses library by GNU](https://www.gnu.org/software/ncurses/). Complete inshort documentation and usage details. This is a reference doc which will help you in the process of building up great interactive command line projects using the ncurses library by GNU.


##How to install ncurses
Well installing ncurses library is an easy task, you just have to follow the steps listed below:

###Installing ncurses on Debian/Ubuntu Linux
1. `sudo apt-get install libncurses5-dev libncursesw5-dev`

###Installing ncurses on Mac OS X
1. Install [Homebrew](http://brew.sh/) (if not already):
`/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`
2. Install ncurses package: `$brew install homebrew/dupes/ncurses`


##How to link ncurses with project

Command structure: `g++ ${file} -o ${file_path}/${file_base_name} -lncurses`

Example: `gcc main.cpp -o main -lncurses`


##Initialization Functions

|Functions|Discription|
|-------------|-------------|
|initscr()|Initializes the terminal in cursor mode. It must be called first to do any manupulation with ncurses package.|
|refresh()|Tell the curses system to dump the contents on the screen. It checks the window and updates only the portion which has been changed.|
|endwin()|Ends the terminal cursor mode.|
|raw()|Disable inline buffering. Control characters are directly passed to the program without generating a signal.|
|cbreak()|Disable inline buffering. Control characters are interpreted as any other character by the terminal driver.|
|echo()|Switch on echo.|
|noecho()|Switch off echo.|
|keypad(stdscr,TRUE)|Enable reading of fucntion keys.|
|halfdelay()|Enable the half−delay mode, it waits for 'X' tenths of a second for input and then returns ERR, if no input is available|

##Miscellaneous Functions

|Functions|Discription|
|-------------|-------------|
|clear()|Clear the stdscr window.|
|wclear()|Clear the given window.|
|move(y,x)|Move the cursor to the x,y position on the window.|
|wmove(win,y,x)|Move the cursor to the x,y position on the given window.|
|getmaxyx(stdscr,y,x)|Get the boundaries of the screeen i.e. number of rows and columns|
|getyx(std,y,x)|Get the current cusor position|

##Output Functions

|Functions|Discription|
|-------------|-------------|
|**addch()**|**Print a character with given attributes at the current cursor position and advance the position of the cursor.**|
|mvaddch()|Move the cursor to a given position and then print as by addch().|
|waddch()|Print a character as by addch() but into the given window.|
|mvwaddch()|Move the cursor to a given position and then print as by addch() but into the given window.|
|**printw()**|**Print similar to printf() but at any position on the window i.e. current cursor position and advance the position of the cursor.**|
|mvprintw()|Move the cursor to a given position and then print as by printw().|
|wprintw()|Print as by printw() but into the given window.|
|mvwprintw()|Move the cursor to a given position and then print as by printw() but into the given window.|
|**addstr()**|**Print a character string with given attributes at the current cursor position and advance the position of the cursor.**|
|mvaddstr()|Move the cursor to a given position and then print as by addstr().|
|waddstr()|Print a character string as by addstr() but into the given window.|
|mvwaddstr()|Move the cursor to a given position and then print as by addstr() but into the given window.|

##Input Functions

|Functions|Discription|
|-------------|-------------|
|**getch()**|**Input a character with given attributes from the current cursor position and advance the position of the cursor.**|
|mvgetch()|Move the cursor to a given position and then input as by getch().|
|whetch()|Input a character as by getch() but from the given window.|
|mvwgetch()|Move the cursor to a given position and then input as by getch() but into the given window.|
|**scanw()**|**Takes input similar to scanf() but from any position on the window i.e. current cursor position and advance the position of the cursor.**|
|mvscanw()|Move the cursor to a given position and then input as by scanw().|
|wscanw()|Takes input as by scanw() but from the given window.|
|mvwscanw()|Move the cursor to a given position and then input as by scanw() but from the given window.|
|**getstr()**|**Input a character string with given attributes from the current cursor position and advance the position of the cursor.**|
|mvgetstr()|Move the cursor to a given position and then input as by getstr().|
|wgetstr()|Input a character string as by getstr() but from the given window.|
|mvwgetstr()|Move the cursor to a given position and then input as by getstr() but from the given window.|

***More yet to come. Under progress...***
