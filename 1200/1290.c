#include <stdio.h>

int f(int a){
    if (a <= 0)
    {
        return a;
    }
    return f(a-1)+a;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
}