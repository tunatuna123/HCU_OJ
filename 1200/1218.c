#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n,&m);
    int cnt = 0;
    int arr[101][101]= {};
    for (int i = 1; i < n+m+1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                if (j+k == i)
                {
                    cnt ++;
                    arr[j][k] = cnt;
                }
                
            }
            
        }
        
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}
