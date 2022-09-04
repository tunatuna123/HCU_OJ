#include "stdio.h"
 
 
int main(void)
{
    int Arr[101] = {};
    int n,g;
    scanf("%d %d",&n, &g);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&Arr[i]);
    }
    for(int i = 0; i < n; i+=g){
        int max = Arr[i];
        for(int j = i; j< i+g; j++){
            if(j < n){
                if( max < Arr[j]){max = Arr[j];}
            }
        }
        printf("%d ",max);
    }
    
    
    return 0;
}
 
