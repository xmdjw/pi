#include <stdio.h>
#include <math.h>

/*
1/1^2 + 1/2^2 + 1/3^2 + 1/4^2 + ... + 1/n^2=pi^2/6
*/
void main()
{
    printf("input length:");

    long n = 0;
    scanf("%ld", &n);

    printf("you input %ld\n", n);

    double sum = 0;

    for (long i = 1; i <= n; i=i+1)
    {
        sum += 1.0 / (i * i);
        printf("%ld, pi=%.20f\n", i, sqrt(sum * 6));
    }

    // double pi = sqrt(sum * 6);

    // printf("pi=%f\n", pi);
    // printf("test``=%f\n", pi);
}
