#include <stdio.h>
#include <math.h>
int rev(int num)
{
    int d=(int)loh10(num)
    if(num=0)
    {
        return 0;
    }
    else
    {
        return ((num%10*pow(10,d))+rev(num/10));
    }
}
int check(int num)
{
    if(num==rev(num))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(check(n)==1)
    {
        printf("%d is a PALIDROME number.\n",n);
    }
    else
    {
        printf("%d is not aPALIDROM number.\n",n);

    }
    return 0;
}


