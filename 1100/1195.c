#include<stdio.h>

int main() {
    int arr[20][20] = { 0, };
    int n,x,y;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
    }
    for (int i = 1; i <= 19; i++) 
    {
        for (int j = 1; j <= 19; j++) 
        {
            printf("%d ", arr[i][j]); 
        }
        printf("\n"); 
    } 
    return 0;
}
