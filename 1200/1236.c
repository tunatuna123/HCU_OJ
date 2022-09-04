#include "stdio.h"

int main(void)
{
    int Arr[1010][1010] = {};
    int n,m,k;
    int x1,y1,x2,y2,u;

    scanf("%d %d %d",&n,&m,&k);
    for(int i = 0; i < k; i++){
        scanf("%d %d %d %d %d",&x1,&y1,&x2,&y2,&u);
        Arr[x1][y1] = Arr[x1][y1]+u;
        Arr[x2+1][y2+1] = Arr[x2+1][y2+1]+u;
        
        Arr[x1][y2+1] = Arr[x1][y2+1]-u;
        Arr[x2+1][y1] = Arr[x2+1][y1]-u;
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            sum += Arr[i][j];
            Arr[i][j] = sum;

        }
        sum = 0;
        
    }
    
    sum = 0;
    for(int j = 1; j <= m; j++){
        for(int i = 1; i <= n; i++){
            sum += Arr[i][j];
            Arr[i][j] = sum;
        }
        sum = 0;
    }
    
    printf("\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}