//
// Created by SpaceXe on 2026/3/27.
//

#include <stdio.h>
int max(int x, int y) {
    return x>y?x:y;
}
int main() {
    int a=5, b=9;
    printf("最大值：%d",max(a,b));
    return 0;
}