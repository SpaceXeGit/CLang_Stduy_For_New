// ... existing code ...

#include <stdio.h>

int main()
{
    int a = 3;
    a>6 ? printf("1"):printf("2");

    // 位运算符演示 - 二进制变化注释
    int x = 5;      // 二进制：0000 0101
    int y = 3;      // 二进制：0000 0011

    // 1. ~ 按位取反运算符
    int not_x = ~x; // ~0000 0101 = 1111 1010 (所有位翻转)
    printf("~%d = %d (二进制：1111 1010)\n", x, not_x);

    // 2. & 按位与运算符
    int and_result = x & y; // 0000 0101 & 0000 0011 = 0000 0001
    printf("%d & %d = %d (二进制：0000 0001)\n", x, y, and_result);

    // 3. ^ 按位异或运算符
    int xor_result = x ^ y; // 0000 0101 ^ 0000 0011 = 0000 0110
    printf("%d ^ %d = %d (二进制：0000 0110)\n", x, y, xor_result);

    // 4. | 按位或运算符
    int or_result = x | y;  // 0000 0101 | 0000 0011 = 0000 0111
    printf("%d | %d = %d (二进制：0000 0111)\n", x, y, or_result);

    // 5. << 左移运算符
    int left_shift = x << 2; // 0000 0101 << 2 = 0001 0100 (左移 2 位)
    printf("%d << 2 = %d (二进制：0001 0100)\n", x, left_shift);

    // 右移运算符（补充）
    int right_shift = x >> 1; // 0000 0101 >> 1 = 0000 0010 (右移 1 位)
    printf("%d >> 1 = %d (二进制：0000 0010)\n", x, right_shift);


    int right_Shift_2X4 = x*x <<2;
    printf("%d", right_Shift_2X4);
    return 0;
}
