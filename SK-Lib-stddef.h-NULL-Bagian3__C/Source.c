#include <stdio.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	// Null pointer
	char* np = NULL;

	// Pointer to null pointer
	char** pnp = &np;

	if (*pnp == NULL) {
		printf("Pointer to a null pointer is valid\n");
	} else {
		printf("Pointer to a null pointer is invalid\n");
	}

	_getch();
	return 0;
}