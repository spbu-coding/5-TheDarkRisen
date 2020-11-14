#include <stdio.h>

void secret_function() {
	printf("Hello there!\n");
	fflush(stdout);
	printf("Whar are you doing in my swamp?!\n");
	fflush(stdout);
}

void vvod() {
	char buffer[20];
	printf("Enter text:\n");
	fflush(stdout);
	scanf("%s", buffer);
	printf("You entered: %s\n", buffer);
	fflush(stdout);
}

int main() {
	printf("Adress: %p\n", vvod);
	printf("Adress: %p\n", secret_function);
	vvod();
	return 0;
}