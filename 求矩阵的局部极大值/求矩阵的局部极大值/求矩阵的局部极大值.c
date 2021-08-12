#include<stdio.h>
int main()
{
	int a[20][20], i, j, m, n, count;
	count = 0;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 1; i < m - 1; i++)
	{
		for (j = 1; j < n - 1; j++)
		{
			if (a[i][j] > a[i][j - 1] &&
				a[i][j] > a[i][j + 1] &&
				a[i][j] > a[i - 1][j] &&
				a[i][j] > a[i + 1][j])
			{
				printf("%d %d %d\n", a[i][j], i + 1, j + 1);
				count++;
			}
		}
	}
	if (count == 0)
		printf("None %d %d\n", m, n);

	return 0;
}