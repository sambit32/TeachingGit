#include <stdio.h>

int Prime(int, int);

int main()
{
	int T;
	printf("Enter number of test cases :");
	scanf("%d", &T);
	printf("Enter the numbers:\n");
	for (int j = 1; j <= T;j++){

	int num, prime;
	scanf("%d", &num);

	prime = Prime(num, num / 2);

	if (prime == 1)
		printf("%d is a prime number\n", num);
	else
		printf("%d is not a prime number\n", num);
	}

	return 0;
}

int Prime(int num, int i)
{

	if (i == 1)
	{
		return 1;
	}
	else
	{
		if (num % i == 0)
			return 0;
		else
			Prime(num, i - 1);
	}
}