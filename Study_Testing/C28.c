//
// Created by SpaceXe on 2026/3/27.
//

#include <stdio.h>
int sum(int n) {
    if(n == 1) return 1;
    return (n-1)*n;
}
int main() {
    printf("%d", sum(100));
    return 0;
}