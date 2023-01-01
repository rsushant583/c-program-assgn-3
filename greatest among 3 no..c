#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three num.");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is great",a);
        else
            printf("%d is great",c);

    }
    else
    {
        if(b>c)
            printf("%d is great",b);
        else
            printf("%d is great",c);
    }
    return 0;
}
