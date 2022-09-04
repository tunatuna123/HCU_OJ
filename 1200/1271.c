#include <stdio.h>

int n;

long long int f(int);

int main()
{
    scanf("%d", &n);
    printf("%lld\n", f(n));
} 

long long int f(int a){
    long long int count = 0;
    for (int i = 1; i <= a; i++)
    {
        count += i;
    }
    return count;
}