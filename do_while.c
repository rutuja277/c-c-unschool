#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;

    do
    {
     printf("enter number ");
     scanf("%d",&num);
     sum=sum+num;


    }while(num !=0);
       printf("sum=%d",sum);
    return 0;
}
