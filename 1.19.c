#include <float.h>
#include <stdio.h>

int main(void)
{
	int i;
	double max_weight, min_weight;
	double weight[3];

	weight[0] = 72;
	weight[1] = 101.5;
	weight[2] = 52.4;

	max_weight = -DBL_MAX;
	min_weight = DBL_MAX;

	for (i = 0; i < 3; i++)
	{
		
		if (weight[i] >= max_weight)
		{
			max_weight = weight[i];
			}
		if (weight[i] <= min_weight)
		{
			min_weight = weight[i];
		}
	}

	printf("一番多い人は、%g kg です.\n", max_weight);
	printf("一番軽い人は、%g kg です.\n", min_weight);

	return 0;
}





#include <stdio.h>

void swap(int *, int *);

int main(void)
{
	int x, y;

	x = 5;
	y = 3;
	swap(&x, &y);
	printf("x=%d\ty=%d\n", x, y);

	return 0;
}

void swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
