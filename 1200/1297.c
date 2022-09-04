#include <stdio.h>

int s;

void num(int a){
    s = 1;
    if (a <= 0)
    {
        return;
    }
    num(a-1);
    printf("%d ", s);
    s++;
}

void line(int a){
    if (a <= 0)
    {
        return;
    }
    line(a-1);
    num(a);
    printf("\n");
}

int main(){
    int n;
    scanf("%d ", &n);
    line(n);
}