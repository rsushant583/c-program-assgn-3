#include<stdio.h>
int main()
{
    int n,r,sum;
    sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n!=0)

   {
       r=n%10;
       sum=sum+r;
       n=n/10;

   }
    printf("the sum of number is %d",sum );
    return 0;

}
