//
// Created by SpaceXe on 2026/3/29.
//


int isPrime(int n) {
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(______) return 0;
    for(int i = 3; i * i <= n; i += 2) {
        if(______) return 0;
    }
    return 1;
}