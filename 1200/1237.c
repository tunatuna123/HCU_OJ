#include "stdio.h"
int main(void){
    int n, x;
    scanf("%d", &n);
    int a[101]={};
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        a[i]=x;
    }
    for(int i=1; i<=n/2; i++){
        printf("%d ", a[2*i-1]<a[2*i] ? a[2*i-1]:a[2*i]);
    }
}
