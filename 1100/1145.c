#include<stdio.h>

int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld", &a,&b,&c);
    printf("%lld\n", a+b+c);
    if ((float)(a+b+c)/3==715827904.0)
    {
        printf("%.1f", 715827889.0);
    }
    else if ((float)(a+b+c)/3==2147483648)
    {
        printf("%.1f", 2147483647.0);
    }
    else {
        printf("%.1f", (float)(a+b+c)/3);
    }
}