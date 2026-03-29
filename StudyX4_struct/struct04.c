//
// Created by SpaceXe on 2026/3/20.
//

#include <stdio.h>
void main()
{
    struct studnet
    {
        char name[20];
        int age;
        char sex;
    }s1={"ZhangSan",19,'M'};
    /*
    struct studnet
    {
        char name[20];
        int age;
        char sex;
    }s1={"ZhangSan",19,'M'};
    struct studnet *p=&s1;
     µÈ¼ÛÓÚ


    struct studnet
    {
        char name[20];
        int age;
        char sex;
    }s1={"ZhangSan",19,'M'},*p=s1;
    */
    struct studnet *p=&s1;
    printf("%s,%d,%c",p->name,p->age,p->sex);
    printf("\n%s,%d,%c",(&s1)->name,(&s1)->age,(&s1)->sex);
    printf("\n%s,%d,%c",(*p).name,(*p).age,(*p).sex);
}