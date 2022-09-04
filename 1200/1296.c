#include <stdio.h>

void star(int a){
    if (a <= 0)
    {
        return;
    }
    star(a-1);
    printf("*");
}

void line(int a){
    if (a<=0)
    {
        return;
    }
    line(a-1);
    star(a);
    printf("\n");
}

int main(){
    int n;
    scanf("%d", &n);
    line(n);
}