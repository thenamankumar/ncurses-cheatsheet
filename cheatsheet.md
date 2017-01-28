#A Handy Ncurses Cheatsheet
A handy cheatsheet for programmers working with [ncurses library by GNU](https://www.gnu.org/software/ncurses/). Complete 
inshort documentation and usage details. This is a reference doc which will help you in the process of building up great 
interactive command line projects using the ncurses library by GNU.


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

***More yet to come. Under progress...***
