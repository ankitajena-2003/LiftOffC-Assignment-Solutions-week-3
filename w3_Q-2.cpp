#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main ()
{
    int num,fac;
    printf("Enter a number to calculate its factorial:");
    scanf("%d",&num);
    fac=fact(num);
    printf("Factorial of %d=%d\n",num,fac);
    return 0;
}

