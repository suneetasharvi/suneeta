#include <stdio.h>

void fact()
{
   int i,fact=1,num;
 
   printf("\nPlease enter a number to find factorial : ");
   scanf("%d",&num);
 
   if (num<0)
   {
      printf("\nPlease enter a positive number to");
      printf(" find factorial and try again. \n");
      printf("\nFactorial can't be found for negative");
      printf(" values. It can be only positive or 0 \n");
      
   } 
 
   for(i=1;i<=num;i++)
   fact=fact*i;
   printf("\n");
   printf("\nEntered number is %d and it's factorial (%d!) is %d\n",num,num,fact);
   
}
