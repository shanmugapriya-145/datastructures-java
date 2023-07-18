//Minimum and maximum number using ternary operator
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[] = {12, 123, 45, 67, 1};
   int max, min,i;
   max = 0;
   min = 300;
   for( i = 0; i<5; i++){
      
        max = (a[i]>max)?a[i]:max ;
         min = (a[i]<min)?a[i]:min ;
        
     
}
printf("min:%d max:%d", min, max);
}
