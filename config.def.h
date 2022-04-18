//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	     /*Update Signal*/
	{"", "~/.config/suckless/dwm-blocks/blocks/memory.sh", 60, 0},
	{"", "~/.config/suckless/dwm-blocks/blocks/sound.sh", 0, 10},
	{"", "~/.config/suckless/dwm-blocks/blocks/battery.sh", 60, 0},
	{"", "~/.config/suckless/dwm-blocks/blocks/brightness.sh", 0, 20},
	{"", "~/.config/suckless/dwm-blocks/blocks/date-time.sh", 30, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
