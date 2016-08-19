#include <stdio.h>

void luup (void) {

	int x;

	*(&x + 2) -= 31;
}

int main (void) {

	int count = 0;

	if (count < 10) {

		printf ("Hello, World \n");

		count++;
	} else {
		return -1;
	}

	luup();

	return 0;
}
