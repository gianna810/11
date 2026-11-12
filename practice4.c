
#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];
    int *ptr;
    int sum = 0;
    double average;

    for (i = 0; i < 5; i++)
    {
        printf("grade[%d] = ", i);
        scanf("%d", &grade[i]);
    }

    ptr = grade;

    for (i = 0; i < 5; i++)
    {
        printf("grade[%d] = %d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }

    average = (double)sum / 5;

    printf("average : %.1f\n", average);

    return 0;
}
