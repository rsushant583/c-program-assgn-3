#include<stdio.h>
int main()
{
    int a,n,b,c;
    printf("Enter a 3 digit number:");
    scanf("%d %d",&a,&b);
    a=a%10;
    n=a/10;
    b=b%10;
    c=c/10;
    printf("%d %d",n,c);
    return 0;


}
