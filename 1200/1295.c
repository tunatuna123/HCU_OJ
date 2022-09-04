#include <stdio.h>

unsigned long long comb(int p, int q){
    if (q == 1)
    {
        return p;
    }
    if (p == q)
    {
        return 1;
    }
    if (q > p)
    {
        return 0;
    }
    return (unsigned long long)comb(p-1, q-1) + comb(p-1, q);
}

int main(){
    int m, n;
    scanf("%d %d", &n,&m);
    printf("%llu", comb(n-1,m-1));
}