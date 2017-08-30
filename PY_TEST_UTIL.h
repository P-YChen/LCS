#include <Windows.h>

#define CONSOLE_BULE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
#define CONSOLE_GREEN SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
#define CONSOLE_RED SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
#define CONSOLE_WHITE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);

#define PRINT_PASS(g) { \
	printf("Group%d:", (g)); \
	CONSOLE_GREEN \
	printf("pass!\n"); \
	CONSOLE_WHITE \
}while (0);

#define PRINT_FAIL(g) { \
	printf("Group%d:", (g)); \
	CONSOLE_RED \
	printf("fail!\n"); \
	CONSOLE_WHITE \
}while (0);