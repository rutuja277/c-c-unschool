#include <stdio.h>


int main()
{
    int a,b,sum,difference,product,quotient,remainder;
    printf("enter first no:");
    scanf("%d",&a);
    printf("enter second no:");
    scanf("%d",&b);
    sum=a+b;
    printf("sum of %d and %d is %d\n",a,b,sum);/*sum*/
    difference=a-b;
    printf("difference in %d and %d is %d\n",a,b,difference);/*difference*/
    product=a*b;
    printf("product of %d and %d is %d\n",a,b,product);/*product*/
    quotient=a/b;
    printf("on dividing %d by %d quotient is %d\n",a,b,quotient);/*quotient*/
    remainder=a%b;
    printf("on dividing %d by %d remainder is %d\n",a,b,remainder);/*remainder*/

    return 0;
}
