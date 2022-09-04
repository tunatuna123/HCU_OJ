#include <stdio.h>

int n;

int chk[110];         

long long d[110];   

long long f(int k)
{
    if(chk[k] == 1) return d[k];
    chk[k]=1;
    if(k <= 2) return d[k]=1;
    return d[k]=(f(k-2)+f(k-1))%1000000007;
}

int main()
{
    scanf("%d", &n);
    printf("%lld\n", f(n));
} 