//
// Created by SpaceXe on 2026/3/27.
//

#include <stdio.h>
struct Student {
    char name[20];
    int age;
    float score;
};
int main() {
    struct Student stu1 = {"张三", 18, 88.5};
    printf("姓名：%s\n", stu1.name);
    return 0;
}