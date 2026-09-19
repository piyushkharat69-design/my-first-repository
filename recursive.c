#include <stdio.h>
int factorial(int number)
{
    if (number == 0 || number == 1)
        return 1;
    else
        return number * factorial(number - 1);
}
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d", &number);
    printf("factorial of %d is %d\n", number, factorial(number));
    return 0;
    
}