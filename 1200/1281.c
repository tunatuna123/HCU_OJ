#include <stdio.h>

int a, b;

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcm(int, int);

int main()
{
    scanf("%d%d", &a, &b);
    printf("%lld\n", lcm(a, b));
} 

long long int lcm(int a, int b){
    long long int min = a;
    long long int max = b;
    if (a>b)
    {
        long long int min = b;
        long long int max = a;
    }
    return min*max / gcd(a,b);
}