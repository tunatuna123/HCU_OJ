#include <stdio.h>

long long int n;

long long int f(long long int);

int main()
{
    scanf("%lld", &n);
    printf("%lld\n", f(n));
} 

long long int f(long long int a){
    while (a>9)
    {
        printf("%lld", a%10);
        a/=10;
    }
    return a;
}