#include <stdio.h>

int n, d[110];

int f();

int main()
{
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &d[i]);

    printf("%d\n", f());
    return 0;
} 

int f() {
	int  max=0;
	for (int i = 0; i < n; i++) {
		if (max < d[i])
			max = d[i];
	}
	for (int i = 0; i < n; i++) {
		if(d[i] == max)
			return i + 1;
	}
}