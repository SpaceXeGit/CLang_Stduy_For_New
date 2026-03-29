#include <stdio.h>

// 定义结构体 Student
struct Student
{
    char name[20];
    long int number;
    int math, english, chinese;  // 三门课成绩
};

int main()
{
    struct Student xs[3];  // 定义包含3个学生的数组

    // 输入3个学生信息
    for(int i = 0; i < 3; i++)
    {
        printf("请输入第%d个学生的信息（姓名 学号 数学 英语 语文）：\n", i+1);
        scanf("%s %ld %d %d %d",
              xs[i].name,
              &xs[i].number,
              &xs[i].math,
              &xs[i].english,
              &xs[i].chinese);
    }

    // 计算并输出每个学生的平均分
    printf("\n学生平均分：\n");
    for(int i = 0; i < 3; i++)
    {
        float pjf = (xs[i].math + xs[i].english + xs[i].chinese) / 3.0;
        printf("学生%d：%s 的平均分是：%.2f\n", i+1, xs[i].name, pjf);
    }

    return 0;
}