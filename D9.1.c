/* Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them. */
#include<stdio.h>
#include<math.h>
int main() 
{
float a,b,c,disc,root1,root2;
printf("Enter a,b,c of an quadratic equation in form of ax^2 + bx + c = 0:");
scanf("%f %f %f", &a, &b, &c);
disc= b * b - 4 * a * c;
if (disc > 0) {
        root1 = (-b + sqrt(disc)) / (2 * a);          /* real and distinct ,where sqrt() is for square root of the expression*/ 
        root2 = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else if (disc == 0) {
        root1 = root2 = -b / (2 * a);   /*real and equal*/
        printf("The roots are real and equal: %.2f and %.2f\n", root1, root2);
    }
else {
printf("The roots are complex"); /* complex root */
}
return 0;
}
  
