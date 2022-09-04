#include <stdio.h>

int n;

void f(int n); //전역 변수 n과 같은 변수 이름을 사용하지만 서로 다른 변수이다. 

int main()
{
    scanf("%d", &n);
    f(n);
} 

void f(int n){
    printf("%s", n==0 ? "false":"true");
}
