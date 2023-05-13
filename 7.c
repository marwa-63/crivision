#include <stdio.h>
#include <stdlib.h>

int main()
{

   char s[100]="Hello World!";
   char s2[100];
   s2[99]='\0';
   for(int i=0;s[i] != '\0' && i<99 ;i++)
   {
       s2[i]=s[i];
   }
   printf("%s",s2);
    return 0;
}
