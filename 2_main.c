//202610302223
//王诗喻

#include <stdio.h>

int main(void)
{
    float num;
    scanf("%f",&num);

    if(num>0)
    {
        printf("正数.\n");
    }
    else if(num<0)
    {
        printf("负数.\n");
    }
    else
    {
        printf("零.\n");
    }
    return 0;
}
