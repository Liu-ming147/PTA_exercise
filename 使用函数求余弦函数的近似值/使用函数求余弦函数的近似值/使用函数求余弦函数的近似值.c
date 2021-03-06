#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
	double e, x;

	scanf("%lf %lf", &e, &x);
	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

	return 0;
}

double funcos(double e, double x) {

	double tmp1 = 1, tmp2 = 1, tmp3 = 1, sum = 1;
	int i, flag;

	flag = -1;

	for (i = 2; tmp1>e; i += 2) {
		tmp2 = tmp2*x*x;
		tmp3 = tmp3*i*(i - 1);
		sum = sum + flag*tmp2 / tmp3;
		tmp1 = tmp2 / tmp3;
		flag = -flag;
	}

	return sum;
}