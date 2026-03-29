#include <stdio.h>
#include <string.h>  // 如果需要用 strcpy 可以加上

// 先定义结构体类型（必须放在使用之前）
typedef struct {
    char name[20];
    int age;
    float score;
} Student;

int main() {
    // 定义结构体数组
    Student class[3] = {
        {"张三", 18, 95.5},
        {"李四", 19, 88.5},
        {"王五", 20, 92.0}
    };

    // 通过数组下标访问
    for(int i=0; i<3; i++) {
        printf("学生%d: %s %d %.1f\n",
               i+1,
               class[i].name,
               class[i].age,
               class[i].score);
    }

    printf("\n");  // 加个空行分隔两种方式

    // 也可以结合指针
    Student *p = class;  // 指向数组第一个元素
    for(int i=0; i<3; i++) {
        printf("学生%d: %s %d %.1f\n",
               i+1,
               (p+i)->name,  // 指针偏移 + ->
               (p+i)->age,
               (p+i)->score);
    }

    return 0;
}