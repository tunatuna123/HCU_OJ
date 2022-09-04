#include <stdio.h>

int a, n;

long long int pow(int, int);

int main()
{
    scanf("%d%d", &a, &n);
    printf("%lld\n", pow(a, n));
} 

long long int pow(int a, int b){
    long long int ans = 1;
    if(a == 1){
        return ans;
    }
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}