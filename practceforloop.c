#include <stdio.h>
int main()
{
 int number, multiplier =1;
 printf("enter the number\n");
 scanf("%d", &number);
 for(multiplier =1; multiplier <=10; multiplier++)
 printf("%d * %d = %d\n",number,multiplier,number*multiplier);


    return 0;
    
}