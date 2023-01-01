#include<stdio.h>
int main()
{
    int i,n,sum;
    sum=i=1;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i;
        i++;

    }
    printf("factorial of %d is %d",n,sum);
    return 0;
}
