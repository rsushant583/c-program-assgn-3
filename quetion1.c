
//1. Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int x;
    if(x<0)
    {
        printf("%d is a negative number",x);
    }
    if(x>0)
    {
        printf("%d is a positive number",x);
    }
    else
    {
        printf("Given number is zero");
    }
    return 0;
}
