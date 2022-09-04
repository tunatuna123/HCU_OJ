#include <stdio.h>

int n;

char grade(int);

int main()
{
    scanf("%d", &n);
    printf("%c\n", grade(n));
} 

char grade(int a){
    if(a>= 90){return 'A';}
    else if (a>=80)
    {
        return 'B';
    }
    else if (a>=70)
    {
        return 'C';
    }
    else if (a>=60)
    {
        return 'D';
    }
    else{
        return 'F';
    }
    return 0;
}