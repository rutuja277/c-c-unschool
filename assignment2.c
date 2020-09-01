#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter three numbers to be added: ");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("sum of %d+%d+%d is %d",a,b,c,sum);
    return 0;
}
