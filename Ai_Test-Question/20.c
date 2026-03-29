//
// Created by SpaceXe on 2026/3/29.
//

#include <stdio.h>
int main() {
    FILE *fp;
    char str[100];
    fp = fopen("name.txt", "w");
    if(fp == NULL) return 1;
    gets(______);
    fputs(______, fp);
    fclose(fp);
    return 0;
}