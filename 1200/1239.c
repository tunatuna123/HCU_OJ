#include "stdio.h"
#include "math.h"
int main(void){
    int n, m, x;
    scanf("%d %d", &n,&m);
    int a[101]={};
    for(int i=1; i<=n; i++){
        scanf("%d", &x);
        a[i]=x;
    }
    for(int i=1; i<=n; i++){
        int k=0;
        for(int j=1; j<=m; j++){
            if(a[(j-1)*m+i] > k){
                k=a[(j-1)*m+i];
            }
        }
        printf("%d ", k);
    }
}