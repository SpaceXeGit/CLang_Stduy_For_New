//
// Created by SpaceXe on 2026/3/27.
//

#include <stdio.h>
int main() {
    char s1[] = "hello";
    char s2[10];
    int i;
    for(i=0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("%s", s2);
    return 0;
}