#include <stdio.h>

int n;

void f(int k); //전달되는 값의 데이터형과 매개 변수 이름을 함께 써두어도 된다. 

int main()
{
    scanf("%d", &n);
    f(n);
} 

void f(int k){
    if(k%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}