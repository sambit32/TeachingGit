#include<stdio.h>

int hcf(int a, int b);


int main(){
	int a, b;
	int T;
	printf("Enter the number of test cases:");
	scanf("%d", &T);
	printf("Enter pairs to find GCD:\n");
	for (int i = 1; i <= T;i++){
		scanf("%d%d", &a, &b);
		printf("GCD is %d\n", hcf(a, b));
	}
	return 0;
}


int hcf(int a, int b){
	if (b != 0)
		return hcf(b, a % b);
	else
		return a;
}