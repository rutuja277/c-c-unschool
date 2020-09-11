/***RUTUJA K, ID:3422077***/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   float per=0;
   printf("enter percentage: ");
   scanf("%f",&per);
   if(per>=45)
   {
       if(per>80)//if >80
       {
           printf(" A Grade");
       }
       else
       {
           if((per<80)&&(per>=70))//if 70-80
           {
               printf("B Grade");
           }
           else
           {
               if((per<70)&&(per>=60))//if 70-60
               {
                   printf("C Grade");
               }
               else
               {
                  printf(" D Grade");//if 45-60
               }
           }
       }
   }
   else
    printf("FAIL");//if <45
    return 0;
}
