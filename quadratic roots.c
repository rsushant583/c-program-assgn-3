#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r1,r2;
    printf("Enter value of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=-b+sqrt(d)/2*a;
        r2=-b-sqrt(d)/2*a;
        printf("roots are real and distinct are equal to %d and %d",r1,r2);
    }
    else if(d==0)
    {
        r1=-b/2*a;
        printf("ROOts are real and equal and is equal to %d",r1);

    }
    else
        printf("Roots are imaginary");
    return 0;
}
