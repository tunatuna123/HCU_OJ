#include <stdio.h>

int main(){
    int n, k;
    int s,e,u;
    int sum=0;
    int arr[101]={};

    scanf("%d %d", &n,&k);
    for (int i = 1; i <= k; i++)
    {
        scanf("%d %d %d", &s,&e,&u);
        arr[s] += u;
        arr[e+1] -= u;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        sum += arr[i];
        printf("%d ", sum);
    }
}