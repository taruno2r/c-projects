#include <stdio.h>

int main ()
{
    // Operation Input
    char action;
    do
    {
    printf("\nEnter the operation (+, -, *, /)\nPress x to exit\n");
    scanf("%ch", &action);
    }
    while(action != '+' && action != '-' && action != '/' && action != '*' && action != 'x');

    // Exiting the Program
    if ( action == 'x')
    {
        return(0);
    }

    double a, b;

    printf("Enter the first and second operand ");
    scanf("%lf %lf", &a, &b);

    // Operations Section
    switch(action)
    {
        // Addition
        case '+':
        {
            printf("%.0lf + %.0lf = %.0lf\n", a, b, a+b);
        }
        break;

        // Subtraction
        case '-':
        {
            printf("%.0lf - %.0lf = %.0lf\n", a, b, a-b);
        }
        break;

        // Multiplication
        case '*':
        {
            printf("%.0lf * %.0lf = %.0lf\n", a, b, a*b);
        }
        break;

        // Division
        case '/':
        {
            printf("%.0lf / %.0lf = %lf\n", a, b, a/b);
        }
        break;
    }
}
