#include<stdio.h>
#include<math.h>
int main()
{
	float money, rate, interest, year;
	scanf("%f %f %f", &money, &year, &rate);
	interest = money * pow((1 + rate), year) - money;
	printf("interest = %.2f\n", interest);

	return 0;
}