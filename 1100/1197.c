#include <stdio.h>

int main(){
    int h,w;
    int n;
    int l,d,x,y;
    int board[101][101]={};
    scanf("%d %d", &h,&w);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &l,&d,&x,&y);
        if (d == 0)
        {
            for (int i = 0; i < l; i++)
            {
                board[x][y+i] = 1;
            }
            
        }
        else
        {
            for (int i = 0; i < l; i++)
            {
                board[x+i][y] = 1;
            }
        }
        
    }
    
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    
}