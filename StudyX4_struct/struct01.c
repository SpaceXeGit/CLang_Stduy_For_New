//
// Created by SpaceXe on 2026/3/20.
//

#include <stdio.h>
int main()
{
    struct Student
    {
        char name[20];
        int age;
        int year;
        int mouth;
        int day;
    }s1,s2,s3;
    struct Student smer;
    s1.age=12;
    printf("%d",s1.age);
    struct stpwer
    {
        int year;
        int month;
        int day;
    };
    struct stfather
    {
        char name[20];
        int age;
        struct stpwer b;
    };
    struct stfather s34 = {"FuckingJona",12,{2026,3,20}};
}