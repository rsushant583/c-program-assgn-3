#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&x, &y, &z);

    if(x>y && y>z)
    {
        printf("Largest number is %d",x);
    }
     if(y>x && x>z)
    {
        printf("Largest number is %d",y);
    }
    else
    {
        printf("Largest number is %d ",z);
    }
    return 0;
}
