#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&c);
    float a,b;
    printf("Enter two operands:");
    scanf("%f %f",&a,&b);
    switch(c)
    {
        case '+': printf("%f + %f = %f",a,b,a+b); break;
        case '-': printf("%f - %f = %f",a,b,a-b); break;
        case '*': printf("%f * %f = %f",a,b,a*b); break;
        case '/': if(b==0) printf("Can't divide by zero");
                  else  printf("%f / %f = %f",a,b,a/b);
                   break;
        default : printf("invalid operator");
    }
    return 0;
}
