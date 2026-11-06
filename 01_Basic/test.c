#include <stdio.h>

int main()
{
    int a , b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    printf("sum = %d\n", sum);
    printf("diff = %d\n", diff);
    printf("product = %d\n", product);

    return 0;
}