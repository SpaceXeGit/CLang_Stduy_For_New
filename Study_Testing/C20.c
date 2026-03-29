//
// Created by SpaceXe on 2026/3/27.
//

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    gets(str);
    int len = strlen(str);
    printf("长度：%d", len);
    return 0;
}