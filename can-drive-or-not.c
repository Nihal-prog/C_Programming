#include <stdio.h>

int main(){
	// Defining age variable
	int age;

	// Taking input
	printf("Enter your age: ");
	scanf("%d", &age);

	// Conditionals per input
	if (age >= 18 && age < 80){printf("You can drive.\n");}
	else if (age < 18){printf("You cannor drive yet.\n");}
	else if (age >= 80 && age < 100){printf("You can, but be extra careful.\n");}
	else if (age > 100 && age < 110){printf("Let someone else drive for you.\n");}
	else {printf("Invalid age.\n");}
	return 0;
}
