#include<stdio.h>
#include<math.h>
bool Isprime(int num)
{
	if(num == 1) return 0;
	for (int i = 2; i <= sqrt(num); i++) 
	{
		if (num % i == 0)return 0;
	}
	return 1;
}
int main()
{
	int n, c=0;
	scanf_s("%d", &n);
	for (int i = 101; i <= n; i++)
	{
		if (Isprime(i)) c++;
	}
	printf("%d", c);
	return 0;
}