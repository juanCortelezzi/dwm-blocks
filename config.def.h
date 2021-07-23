//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "/home/wiz/.config/dwmblocks/blocks/memory.sh", 60,	0},
	{"蓼 ", "/home/wiz/.config/dwmblocks/blocks/sound.sh",		 0,	10},
	{" ", "/home/wiz/.config/dwmblocks/blocks/brightness.sh",	 0,	20},
	{"", "/home/wiz/.config/dwmblocks/blocks/date-time.sh",		60,	 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
