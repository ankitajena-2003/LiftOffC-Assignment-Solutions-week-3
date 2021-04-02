#include <stdio.h>
double square(double n)
{
    return(n*n);
}
int main()
{
    float n;
    double s;
    printf("Input number for square :");
    scanf("%f",&n);
    s=square(n);
    printf("The square of %.2f is:%.41f\n",n,s);
    return 0;
}
