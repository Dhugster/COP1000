/*
Exam 2 Program
Program Created By: Brandon Huggins
Date Due: 2/28/2016
*/

#define _CRT_SECURE_NO_WARNINGS
#define cls system("cls")
#define pause system("pause")
#define flush fflush(stdin)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
	int num, count = 0, high = 0, low = 0, total = 0;
	float avg;
	char choice = ' ', again;

	printf("\t\t      =====================\n");
	printf("\t\t      ==    MAIN MENU    ==\n");
	printf("\t\t      =====================\n");
	printf("\t\tA. Enter a number.\n");
	printf("\t\tB. Display the highest number.\n");
	printf("\t\tC. Display the lowest number.\n");
	printf("\t\tD. Display the average of all numbers.\n");
	printf("\t\tE. Display how many numbers were entered.\n");
	printf("\t\tQ. Quit.\n\n\n");
	printf("Enter your selection: ");
	scanf("%c", &choice);

    switch (choice) {
    case 'A':
        do {
            printf("Enter a number: ");
            scanf("%i", &num);
            if (count = 0)  {
                high = num;
                low = num;
            }
            else
            if (num > high)
                num = high;
            if (num < low)
                num = low;
            count++;

            printf("Do you want to enter another number? (Y/N):  ");
            scanf("%c", &again);
        } 
		
		while (again != 'N');
        break;
		
    case 'B':
        if (count == 0) { printf("Please enter a number first.\n\n"); 
            }
        else printf("The highest number is %i\n\n", high);
        break;
		
    case 'C':
        if (count == 0) printf("Please enter a number first.\n\n");
        else printf("The lowest number is %i\n\n", low);
        break;
		
    case 'D':
        if (count == 0) printf("Please enter a number first.\n\n");
        else
            avg = total / count;
            printf("The average is %.2f\n\n", avg);
        break;
		
    case 'E':
        printf("You entered %i numbers.\n\n", count);
        break;
		
    case 'Q':
        printf("Thanks for playing.\n\n");
        break;
		
    default:
        printf("Invalid Selection.\n\n");
        break;
    }
    pause;
}
