#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


long findsum(int *arr, int first, int last) 
{

	int i = 0;
	long sum = 0;

	for (i = first ; i <= last; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int partition(int *arr, int n)
{
	long p, q = 0, s = 0, l = 0, r = 0, t = INT_MAX;
	int mid = 0;
	for (p = 1; p < n - 1; p++)
	{
		q = findsum(arr, 0, p - 1);
		s = findsum(arr, p + 1, n - 1);

		int c = abs(q - s);

		if (c < t)
		{
			mid = p;
			t = c;
			l = q;
			r = s;                 
		}
	}

	
	return mid;
}

void main()
{
	printf("Give us the length of the list\n");
	int len = 0;
	scanf("%d", &len);           

	int list[len];

	int i;

	for (i = 0; i < len; i++)
	{
		list[i] = (2 * i) + 4;
	}

	
	int index = partition(list, len);

	printf("\nOutput: %d", index);
}