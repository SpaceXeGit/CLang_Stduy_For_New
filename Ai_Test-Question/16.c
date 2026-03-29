//
// Created by SpaceXe on 2026/3/29.
//


#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    fp = fopen("test.txt", "______");
    if(______ == NULL) {
        printf("打开失败");
        return 1;
    }
    while((ch = ______) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}