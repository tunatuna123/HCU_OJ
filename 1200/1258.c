#include <stdio.h>

int n;

void f(int);

int main()
{
    scanf("%d", &n);
    f(n);
} 

void f(int a){
    for(int i=1; i<=a; i++){
        printf("love\n");
    }
}