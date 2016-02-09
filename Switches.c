/*
	Programmer: Brandon Huggins
	Date: 02/09/2016
	Program Name: Class example (Tuesday)
	COP 1000
*/
#define _CRT_SECURE_NO_WARNINGS
#define CLS system("cls")
#define PAUSE system("pause")
#include <stdio.h>
#include <stdlib.h>

main() {
	// Declare Variables
	int userChoice = 0;
	float input = 0.0; 

	// Display Menu
	printf("1. Enter your class average\n");
	printf("2. Enter your weight\n");
	printf("3. Enter your age\n");
	printf("4. Quit\n\n");
	printf("Enter your selection: ");
	scanf("%i", &userChoice);

	switch (userChoice) {
		case 1:		// class average
			printf("Enter your class average: ");
			scanf("%f", &input);
			if (input >= 70)
				printf("You are passing!");
			else
				printf("You failed :(\n");
			PAUSE;
			break;

		case 2:		// weight
			printf("Enter your weight: ");
			scanf("%f", &input);
			if (input > 500)
				printf("You are overweight! :(");
			else
				printf("Have a good day!\n");
			PAUSE;
			break;

		case 3:		// Age
			printf("Enter your age: ");
			scanf("%f", &input);
			if (input >= 13 && input < 20)
				printf("You are a teenager!");
			else
				printf("You are NOT a teenager!\n");
			PAUSE;
			break;

		case 4:		// Quit Program
			printf("Thanks for using the program!\n");
			PAUSE;
			break;

		default:	// Abort
			printf("Invalid choice. Program will abort now.");
			PAUSE;
			break;
	} // End Switch
} // End Main Call
