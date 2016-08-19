#include <stdio.h>

void luup (void) {

	int x, y;
	static int s = 0;

	if ( s == 0) {
		*(&x + 2) -= 31;
		s++;
	} else {
		*(&x + 2) += 26;
	}
}

int main (void) {

	int x, y = 0;
	x=0;
	printf ("selam %d\n", y++);

	luup();
	x=1;
	printf("X=%d \n", x);
	return 0;
}
