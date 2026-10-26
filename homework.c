#include <stdio.h>

int main(void)
{
    float c ,f;
    scanf("%f",&c);
    f = (c * 9.0f / 5.0f) + 32.0f;
    printf("华氏温度: %.1f\n", f);
    return 0;
}
