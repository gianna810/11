
#include <stdio.h>

int main(void)
{
    int i = 4;  // 300으로 변경해서도 실행해보기

    int *pi = &i;
    char *pc = (char *)&i;

    printf("%i, %i, %i\n", i, *pi, *pc);

    return 0;
}
