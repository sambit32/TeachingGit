#include<stdio.h>

int evnodd(int);
int main(){
	int T, num;
	printf("Enter the number of test cases:");
	scanf("%d", &T);
	printf("Enter the numbers:");

	for (int i = 1; i <= T;i++)
	{
		scanf("%d", &num);
		evnodd(num);
	}
	return 0;
}
int evnodd(int x){
	if (x % 2 == 0)
		printf("Even");
	else
		printf("Odd");

	return 0;
}