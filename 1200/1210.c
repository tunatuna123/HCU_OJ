#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i%2==1){
                printf("%d ",  i*n+j);
            }
            else{
                printf("%d ", i*n+(n-j+1));
            }
        }
        printf("\n");
    }
    return 0;
}