//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"",	"battery",	5,	3},
  	{"",	"sb-mailbox",	180,	12},
	{"🔊  ",	"vol",	2,	10},
	{"🔆  ",	"brightnessctl | grep -oP '[^()]+%'",	10, 10},
	{"",	"internet.sh",	5,	4},
	{"🌡️  ",	"sensors | awk '/Core 0/ {print  $3}'",			30,		0},
	{"💻  ",	"top -bn1 | awk '/Cpu/ { print $2}'",				30,		0},
	{"⚖️  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"⏰  ", "date '+%b %d (%a) %I:%M%p '",					5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  |  ";
static unsigned int delimLen = 5;
