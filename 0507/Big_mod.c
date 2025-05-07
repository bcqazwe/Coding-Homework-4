#include <stdio.h>

long long mod_pow(long long base, long long exp, int mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) 
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    long long B, P;
    int M;
    while (scanf("%lld%lld%d", &B, &P, &M) != EOF) {
        long long R = mod_pow(B, P, M);
        printf("%lld\n", R);
    }
    return 0;
}