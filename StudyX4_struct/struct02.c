//
// Created by SpaceXe on 2026/3/20.
//

#include <stdio.h>

int main()
{
    struct student
    {
        char name[20];
        int age;
        char sex;
    };

    struct student s[2] = {
        {"张三", 18, 'M'},
        {"李四", 19, 'F'}
    };

    struct student *p;
    p = s;
    int i;

    // 方式1：指针移动遍历（0放在前面）
    for (i = 0; i < 2; i++, p++)
    {
        printf("0 %s 0 %d 0 %c\n", p->name, p->age, p->sex);
    }

    printf("\n");  // 空行分隔

    // 方式2：通过取地址访问（1放在前面）
    for (i = 0; i < 2; i++)
    {
        printf("1 %s 1 %d 1 %c\n", (&s[i])->name, (&s[i])->age, (&s[i])->sex);
    }

    return 0;
}