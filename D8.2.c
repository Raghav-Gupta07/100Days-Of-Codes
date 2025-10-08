/* Q16 (Conditional Sta tements)
Write a program to input three numbers and find the largest among them using if–else. */

#include<stdio.h>
int main() 
{
int a,b,c;
printf("Enter Three Numbers:");
scanf("%d %d %d", &a, &b, &c);
if (a>b && a>c) {
printf("%d is the largest number among them all",a);
}
  else if (b>c && b>a) {
printf("%d is the largest number among them all",b);
}
else {
printf("%d is the largest number among them all",c);
}
return 0;
}
