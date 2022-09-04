#include <stdio.h>

int n;

void f(int); //매개 변수의 이름 없이 전달되는 값의 데이터형만 써도 된다.

int main()
{
    scanf("%d", &n);
    f(n);
} 

void f(int a){
    if(a==1){
        printf("hello");
    }
    else{
        printf("world");
    }
}