#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==1){
                printf("%d ",  (2*j*n+1+n)-(i+(j*n)));
            }
            else{
                printf("%d ", i+(j*n));
            }
        }
        printf("\n");
    }
    return 0;
}