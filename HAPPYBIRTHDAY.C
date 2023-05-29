#include <stdio.h>

int main(){
	char name[50];  // Input is string of characters
	
	printf("Enter your name:");

	scanf("%s", name);  //Read input and store it in name variable
	
	printf("Happy Birthday, %s!\n", name);

	return 0;
}
