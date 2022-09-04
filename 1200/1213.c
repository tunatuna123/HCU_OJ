#include <stdio.h>

int main()
{
    int arr[101][101];
    int m,n, x=1;
    scanf("%d %d", &m,&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            arr[i][j]=x;
            x++;
        }
    }
    for(int i=m;i>=1;i--){
        for(int j=n;j>=1;j--){
            if(i%2==1){
                printf("%d ", arr[i][j]);
            }
            else{
                printf("%d ", arr[i][n-j+1]);
            }
        }
        printf("\n");
    }
    return 0;
}