#include <stdio.h>

int comb(int p, int q){
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
    return comb(p-1, q-1) + comb(p-1, q);
}

int main(){
    int m, n;
    scanf("%d %d", &n,&m);
    printf("%d", comb(n,m));
}