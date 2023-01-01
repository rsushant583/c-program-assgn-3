//Finding even odd by bitwise operator

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if((num&1)==1)
    {
        printf("the number is odd\n");
    }
    else
        printf("the number is even\n");

    return 0;



}
