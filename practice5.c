
#include <stdio.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)10000;
    pi = (int *)10000;
    pd = (double *)10000;

    printf("Before:\n");
    printf("pc = %p\n", (void *)pc);
    printf("pi = %p\n", (void *)pi);
    printf("pd = %p\n", (void *)pd);

    pc++;
    pi++;
    pd++;

    printf("After:\n");
    printf("pc = %p\n", (void *)pc);
    printf("pi = %p\n", (void *)pi);
    printf("pd = %p\n", (void *)pd);

    return 0;
}
