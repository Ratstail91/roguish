#include "io.hpp"

//platform check
#define WINDOWS _WIN32 _WIN64

#ifdef WINDOWS
#include <termios.h>
#include <unistd.h>
#include <stdio.h>

//reads from keypress, doesn't echo
int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

//reads from keypress, echoes
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

//class implementation
void IO::Init() {
	//
}

void IO::Quit() {
	//
}

char IO::Input() {
	return getch();
}

void IO::Clear() {
	printf("\x1b[2J");
}

void IO::Print(const char c) {
	printf("%c", c);
}

void IO::Print(const char* s) {
	printf("%s", s);
}

#endif //WINDOWS