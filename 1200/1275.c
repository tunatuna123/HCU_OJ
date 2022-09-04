#include <stdio.h>

int n, m;

long long int f(int, int);

int main()
{
    scanf("%d%d", &n, &m);
    printf("%lld\n", f(n, m));
} 

long long int f(int a, int b){
    return (long long int)a+b;
}