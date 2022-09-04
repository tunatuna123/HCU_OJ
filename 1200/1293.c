#include <stdio.h>

int stair(int a){
    if (a == 1)
    {
        return 1;
    }
    else if (a == 2)
    {
        return 2;
    }
    else if (a == 3)
    {
        return 4;
    }
    return stair(a-3)+stair(a-2)+stair(a-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", stair(n));
}