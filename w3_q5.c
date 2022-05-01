#include <stdio.h>

int max(int[], int);
int main()
{
	int a[100];
	int n , m, j;
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter the elements of array:");

	for (j = 1; j <= n;j++){
		scanf("%d", &a[j]);
	}
	m = max(a, n);
	printf("largest number is %d", m);
	return 0;
}
int max(int x[], int k){
	int t, i;
	t = x[0];
	for (i = 1; i <= k; i++)
	{
		if (x[i] > t)
			t = x[i];
	}
	return (t);
}