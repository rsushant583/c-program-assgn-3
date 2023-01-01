#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if (x<=99)
        printf("%d is a 2 digit number",x);

    else if(x>99 && x<1000)
        printf("%d is a 3 digit number",x);

    else
        printf("%d is more than 3 digit number",x);

    return 0;

}
