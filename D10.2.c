/* Q20: Write a program that takes a number (1–7) as input and prints the corresponding day of the week using a switch-case statement.*/
#include <stdio.h>
int main() {
    int day;

    
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &day);

    
    switch(day) {
        case 1:
            printf("monday");
            break;
        case 2:
            printf("tuesday");
            break;
        case 3:
            printf("wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("Not a valid input.");
    }

    return 0;
}
