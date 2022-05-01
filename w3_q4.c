#include<stdio.h>

int swap(int,int);

int main(){
	int T;
	int a, b;
	printf("Enter the number of test cases:");
	scanf("%d", &T);
	printf("Enter the numbers to swap:\n");
	for (int j = 1; j <= T;j++){
		scanf("%d%d", &a, &b);
		swap(a, b);
	}
	return 0;
}

int swap( int a,int b){
	a = a + b;
	b = a - b;
	a = a - b;
	printf("( %d, %d )\n", a, b);
	return 0;
}