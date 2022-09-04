#include <stdio.h>

int main(){
    int n;
    int arr[101] = {};
    int prefix_sum[101] = {0,};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i-1] + arr[i-1];
    }
    
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", prefix_sum[i]);
    }
    
}