/*
 * This is free and unencumbered software released into the public domain.
 *
 * For more information, please refer to <https://unlicense.org>
 * Added library by netoe1 -> https://github.com/netoe1.
 * Defines were made by RabaDabaDoba -> https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a.
 */
#ifndef CTERMCOLORS_H
#define CTERMCOLORS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#if __linux__
#define clearConsole() system("clear")
#elif _WIN32
#define clearConsole system("cls")

#endif

// Regular text
#define BLACK "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define MAGENTA "\e[0;35m"
#define CYAN "\e[0;36m"
#define WHITE "\e[0;37m"

// Regular bold text
#define BOLD_BLACK "\e[1;30m"
#define BOLD_RED "\e[1;31m"
#define BOLD_GREEN "\e[1;32m"
#define BOLD_YELLOW "\e[1;33m"
#define BOLD_BLUE "\e[1;34m"
#define BOLD_MAGENTA "\e[1;35m"
#define BOLD_CYAN "\e[1;36m"
#define BOLD_WHITE "\e[1;37m"

// Regular underline text
#define UNDERTXT_BLACK "\e[4;30m"
#define UNDERTXT_RED "\e[4;31m"
#define UNDERTXT_GREEN "\e[4;32m"
#define UNDERTXT_YELLOW "\e[4;33m"
#define UNDERTXT_BLUE "\e[4;34m"
#define UNDERTXT_MAGENTA "\e[4;35m"
#define UNDERTXT_CYAN "\e[4;36m"
#define UNDERTXT_WHITE "\e[4;37m"

// Regular background
#define BG_BLACK "\e[40m"
#define BG_RED "\e[41m"
#define BG_GREEN "\e[42m"
#define BG_YELLOW "\e[43m"
#define BG_BLUE "\e[44m"
#define BG_MAGENTA "\e[45m"
#define BG_CYAN "\e[46m"
#define BG_WHITE "\e[47m"

// High intensty background
#define BG_STRONG_BLACK "\e[0;100m"
#define BG_STRONG_RED "\e[0;101m"
#define BG_STRONG_GREEN "\e[0;102m"
#define BG_STRONG_YELLOW "\e[0;103m"
#define BG_STRONG_BLUE "\e[0;104m"
#define BG_STRONG_MAGENTA "\e[0;105m"
#define BG_STRONG_CYAN "\e[0;106m"
#define BG_STRONG_WHITE "\e[0;107m"

// High intensty text
#define HBLK "\e[0;90m"
#define HRED "\e[0;91m"
#define HGRN "\e[0;92m"
#define HYEL "\e[0;93m"
#define HBLU "\e[0;94m"
#define HMAG "\e[0;95m"
#define HCYN "\e[0;96m"
#define HWHT "\e[0;97m"

// Bold high intensity text
#define BOLD_TEXT_BLACK "\e[1;90m"
#define BOLD_TEXT_RED "\e[1;91m"
#define BOLD_TEXT_GREEN "\e[1;92m"
#define BOLD_TEXT_YELLOW "\e[1;93m"
#define BOLD_TEXT_BLUE "\e[1;94m"
#define BOLD_TEXT_MAGENTA "\e[1;95m"
#define BOLD_TEXT_CYAN "\e[1;96m"
#define BOLD_TEXT_WHITE "\e[1;97m"

// To reset....
#define COLOR_RESET "\e[0m"

void printwcolor(const char *color, const char *message)
{
	if ((color == NULL && color == '\0') || (message == NULL && message == '\0'))
	{
		printf("%s%s", color, message);
	}
}

void resetColor()
{
	printf(COLOR_RESET);
	clearConsole();
}

#endif
