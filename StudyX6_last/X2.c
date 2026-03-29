//
// Created by SpaceXe on 2026/3/21.
//




#include <stdio.h>
int main()
{
    FILE *fp;
    int a[5] ={1,2,3,4,5};


    fp = fopen("D:/CodeX/CLion/Study/StudyX6_last/name.txt",
        "wb");
    fwrite(a,4,5,fp);
    fclose(fp);





    return 0;
}