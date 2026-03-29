//
// Created by SpaceXe on 2026/3/29.
//
#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "hello";
    char s2[10];
    int len = strlen(s1);
    for(int i = 0; i < len; i++) {
        s2[i] = ______;
    }
    s2[len] = ______;
    printf("%s", s2);
    return 0;
}