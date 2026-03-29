#include <stdio.h>

int main()
{
    int a[10];
    int temp;  // 用于交换的临时变量
    
    // 输入10个整数
    printf("请输入10个整数：\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);  // 注意需要 & 取地址符
    }
    
    // 冒泡排序（从小到大）
    for(int i = 0; i < 9; i++)  // 外层循环：需要比较9轮
    {
        for(int j = 0; j < 9 - i; j++)  // 内层循环：每轮比较次数递减
        {
            if(a[j] > a[j + 1])  // 如果前一个数大于后一个数，就交换
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    // 输出排序后的数组
    printf("排序后的数组：\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}