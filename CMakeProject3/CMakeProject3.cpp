// CMakeProject3.cpp : Defines the entry point for the application.
//

#include "CMakeProject3.h"
#include <stdio.h>
#include <ctype.h>

using namespace std;
int main();
int PocetZnaku(char text[]);
int PocetCisel(char text[]);
int NejdelsiSlovo(char text[]);

int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

	printf("Pocet znaku: %d\n", PocetZnaku(text));
	printf("Pocet cisel: %d\n", PocetCisel(text));
	printf("Nejdelsi slovo: %d\n", NejdelsiSlovo(text));

	return 0;
}

int PocetZnaku(char text[]) {
	int pocet_znaku = 0, i;

	for (i = 0; text[i] != '\0'; i++) {
		if (isalpha(text[i]) != 0) {
			pocet_znaku++;
		}
	}
	return pocet_znaku;
}

int PocetCisel(char text[]) {
	int pocet_cisel = 0, i;

	for (i = 0; text[i] != '\0'; i++) {
		if (isdigit(text[i]) != 0) {
			pocet_cisel++;
		}
	}
	return pocet_cisel;
}

int NejdelsiSlovo(char text[]) {
	int max = 0, i, delka = 0;

	for (i = 0; i < strlen(text); i++) {
		if (text[i] != ' ') {
			delka++;
		}
		else {
			if (delka > max) {
				max = delka;
			}
			delka = 0;

		}
	}
	return max;
}
