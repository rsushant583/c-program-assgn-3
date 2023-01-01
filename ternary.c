#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 number");
    scanf("%d %d",&a,&b);
    ((a>>1)==0)?printf("%d is even",a):printf("%d is odd",a);
    return 0;
}
