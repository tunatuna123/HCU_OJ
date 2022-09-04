#include <stdio.h>

int main(){
    int n,m;
    int arr[101][101]={};
    int prefix_sum[101][101]={};

    scanf("%d %d", &n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == 0 || j == 0)
            {
                prefix_sum[i][j] = 0;
            }
            
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix_sum[i][j] = prefix_sum[i-1][j]+prefix_sum[i][j-1]-prefix_sum[i-1][j-1]+arr[i-1][j-1];
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", prefix_sum[i][j]);
        }
        printf("\n");
    }
    
}