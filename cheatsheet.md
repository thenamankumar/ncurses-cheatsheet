# A Handy Ncurses Cheatsheet
A handy cheatsheet for programmers working with [ncurses library by GNU](https://www.gnu.org/software/ncurses/). Complete inshort documentation and usage details. This is a reference doc which will help you in the process of building up great interactive command line projects using the ncurses library by GNU.


## How to install ncurses
Well installing ncurses library is an easy task, you just have to follow the steps listed below:

### Installing ncurses on Debian/Ubuntu Linux
1. `sudo apt-get install libncurses5-dev libncursesw5-dev`

### Installing ncurses on Mac OS X
1. Install [Homebrew](http://brew.sh/) (if not already):
`/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`
2. Install ncurses package: `$brew install homebrew/dupes/ncurses`


## How to link ncurses with project

Command structure: `g++ ${file} -o ${file_path}/${file_base_name} -lncurses`

Example: `gcc main.cpp -o main -lncurses`


## Initialization Functions

|Functions|Discription|
|-------------|-------------|
|initscr()|Initializes the terminal in cursor mode. It must be called first to do any manupulation with ncurses package.|
|refresh()|Tell the curses system to dump the contents on the screen. It checks the window and updates only the portion which has been changed.|
|wrefresh()|Tell the curses system to dump the contents on the given window. It checks the given window and updates only the portion which has been changed.|
|endwin()|Ends the terminal cursor mode.|
|raw()|Disable inline buffering. Control characters are directly passed to the program without generating a signal.|
|cbreak()|Disable inline buffering. Control characters are interpreted as any other character by the terminal driver.|
|echo()|Switch on echo.|
|noecho()|Switch off echo.|
|keypad(stdscr,TRUE)|Enable reading of fucntion keys.|
|halfdelay()|Enable the half−delay mode, it waits for 'X' tenths of a second for input and then returns ERR, if no input is available|

## Miscellaneous Functions

|Functions|Discription|
|-------------|-------------|
|clear()|Clear the stdscr window.|
|wclear()|Clear the given window.|
|move(y,x)|Move the cursor to the x,y position on the window.|
|wmove(win,y,x)|Move the cursor to the x,y position on the given window.|
|getmaxyx(stdscr,y,x)|Get the boundaries of the screeen i.e. number of rows and columns|
|getyx(stdscr,y,x)|Get the current cusor position|

## Output Functions

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

## Input Functions

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

## Attribute Functions

|Functions|Discription|
|-------------|-------------|
|**attron()**|**Switches on attribute(s) given to it.**|
|wattron()|Switches on attribute(s) given to it, in the given window.|
|**attrset()**|**Fully overrides whatever attributes the window previously had and sets it to the new attribute(s).**|
|wattrset()|Fully overrides whatever attributes the given window previously had and sets it to the new attribute(s).|
|**attroff()**|**Switches off the attribute(s) given to it.**|
|wattroff()|Switches off the attribute(s) given to it, in the given window.|
|**standend()**|**Turns off all attributes and brings you to normal mode.**|
|**attr_get()**|**Gets the current attributes and color pair of the window.**|
|wattr_get()|Gets the current attributes and color pair of the given window.|
|**chgat()**|**Change attribute(s) for characters that are already on the screen.**|
|mvchgat()|Move the cursor to the given position and then perform the work as by chgat().|
|wchgat()|Perform the work done as by chgat() on the given window.|
|mvwchgat()|Move the cursor to the given position and then perform the work as by chgat() on the given window.|

## Attributes List

We can **OR(|)** any number of above attributes to get a combined effect.

|Functions|Discription|
|-------------|-------------|
|A_NORMAL| Normal display (no highlight).|
|A_STANDOUT| Best highlighting mode of the terminal.|
|A_UNDERLINE| Underlining.|
|A_REVERSE| Reverse video.|
|A_BLINK| Blinking.|
|A_DIM| Half bright.|
|A_BOLD| Extra bright or bold.|
|A_PROTECT| Protected mode.|
|A_INVIS| Invisible or blank mode.|
|A_ALTCHARSET| Alternate character set.|
|A_CHARTEXT| Bit−mask to extract a character.|
|COLOR_PAIR(n)| Color−pair number n.|

## Color Functions

|Functions|Discription|
|-------------|-------------|
|start_color()| Needed to be called before using colors.|
|has_colors()| Check whether terminal has color capabilities.|
|init_pair()| Initiate a color pair number n with foreground and background color, which can be used in COLOR_PAIR(n).|
|init_color()| Change the rgb values for the colors defined by curses initially.|
|can_change_color()| Check whether the terminal has the capability of changing color.|

## Colors

The following colors are defined in curses.h. You can use these as parameters for various color functions.

|Colors|Code|
|-------------|-------------|
|COLOR_BLACK| 0|
|COLOR_RED| 1|
|COLOR_GREEN| 2|
|COLOR_YELLOW| 3|
|COLOR_BLUE| 4|
|COLOR_MAGENTA| 5|
|COLOR_CYAN| 6|
|COLOR_WHITE| 7|

## Windows Functions

|Functions|Discription|
|-------------|-------------|
|box()| Draw border around windows.
|newwin()| Creates a new Window.|
|create_newwin()| Creates a new window with newwin() and displays a border around it with box().|
|delwin()| Deallocate memory related to the window.|
|destroy_win()| Erases the window from the screena dn then delete it by calling delwin()|
|wborder()| Draws a border around the window by the characters given to it.|
