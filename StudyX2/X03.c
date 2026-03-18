#include <stdio.h>

int main()
{
    int a[10], i, max,min;

    // 读取第一个数并初始化为最大值
    scanf("%d", &a[0]);
    max = a[0];
    min = a[0];

    // 读取剩余 9 个数并比较
    for(i = 1; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if(max < a[i])
            max = a[i];
        if (min>a[ i])
            min=a[i];
    }

    printf("Max is %d\n,Min is %d", max,min);
    return 0;
}
