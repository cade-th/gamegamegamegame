/*

	nibble example
		0000	000		00		0
	0	(sub)	(sub)	(sub)	(sub)
	1							add
	2					add		sub
	3							add
	4			add		sub		sub
	5							add
	6					add		sub
	7							add
	8	add		sub		sub		sub
	9							add
	10					add		sub
	11							add
	12			add		sub		sub
	13							add
	14					add		sub
	15							add

*/

//dec to binary conversion within nibble
#include <stdio.h>

int main (void) {
	int running = 0;
	int decimal = 15;
	int binary = 0;

	//temp
	int one = 0, two = 0, four = 0, eight = 0;

	printf("enter a dec integer under 16 (nibble)\n");
	scanf_s("%d", &decimal);

	if (decimal > 15) {
	printf("overflow");
	} else {
		for (int i = 0; i < decimal + 1; i++) {
			if (one == 1) {
				binary += 1;
			}
			else if (one == 2) {
				binary -= 1;
				one = 0;
			}

			if (two == 2) {
				binary += 10;
			}
			else if (two == 4) {
				binary -= 10;
				two = 0;
			}

			if (four == 4) {
				binary += 100;
			}
			else if (four == 8) {
				binary -= 100;
				four = 0;
			}

			if (eight == 8) {
				binary += 1000;
			}
			else if (eight == 16) {
				binary -= 1000;
				eight = 0;
			}

			one++;
			two++;
			four++;
			eight++;
		}
	}

	if (decimal < 16)
		printf("%i", binary);

	while (running == 0)
	{

	}
	return 0;
}