//
// Created by SpaceXe on 2026/3/21.
//

#include <stdio.h>

int main()
{

    FILE *f;
    f = fopen("D:/CodeX/CLion/Study/StudyX6_last/name.txt", "w");
    char ch;
    scanf("%s",ch);
    while ((ch = getchar()) != '\n')
    {
        fputc(ch, f);  // 把字符写入文件
    }
    fputc('s',f);
    char f1;
    f1 = fgetc(f);
    putchar(f1);
    fclose(f);

    return 0;
}