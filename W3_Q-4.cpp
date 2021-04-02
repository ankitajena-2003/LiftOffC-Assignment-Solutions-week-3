#include <stdio.h>
int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num ,fac;
    printf("Enter a number to calculate its factorial:");
    scanf("%d",&num);
    fac=fact(num);
    printf("Factorial of %d=%d\n",num,fac);
    return 0;
}
