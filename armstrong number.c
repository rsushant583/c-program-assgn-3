#include<stdio.h>
int main()
{
    int n,num,r,sum;
    printf("Enter the number");
    scanf("%d",&n);
    sum=0;num=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(sum==num)
        printf("%d is an armstrong number",num);

    else
        printf("%d is not an armstrong number",num);
    return 0;
}
