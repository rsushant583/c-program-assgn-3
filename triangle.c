#include<stdio.h>
int main()
{

    int a,b,c;
    printf("enter 3 angles of the triangles:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b+c>180)
        printf("the triangle with angles %d %d and %d is not valid",a,b,c);
    if(a+b+c<180)
         printf("the triangle with angles %d %d and %d is not valid",a,b,c);
    else
    printf("the triangle with angles %d %d and %d is  valid",a,b,c);
    return ;


}
