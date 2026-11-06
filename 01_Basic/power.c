//计算数的整数幂
#include <stdio.h>
double power(double n, int p);
int main()
{
    double x,xpow;
    int exp;
    printf("Enter a number and an integer power: ");
    printf("to which\nthe number will be raised.Enter q to quit.\n");
    printf("to quit.\n");
    while(scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    return 0;
}

double power(double n, int p)//函数定义
{
    double pow = 1.0;
    for (int i = 0; i < p; i++)
    {
        pow *= n;
    }
    return pow;
}