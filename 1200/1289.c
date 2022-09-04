#include <stdio.h>

void f(int a){
    if (a<=0) return;
    f(a-1);
    printf("%d ", a);
}

int main(){
    int n;
    scanf("%d", &n);
    f(n);
}