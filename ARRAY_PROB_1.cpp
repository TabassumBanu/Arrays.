//ARRAY_PROB_1:Find a pair in an array of size 'n', whose sum is X
//Let Array be {1, 4, 45, 6, 10, -8} and sum to find be 16Sort the array
/*---------------------------------------------------------------
method 1:
sort using sorting methods to asssending order
A = {-8, 1, 4, 6, 10, 45}

Initialize l = 0, r = 5
A[l] + A[r] ( -8 + 45) > 16 => decrement r. Now r = 4
A[l] + A[r] ( -8 + 10) < 2 => increment l. Now l = 1
A[l] + A[r] ( 1 + 10) < 16 => increment l. Now l = 2
A[l] + A[r] ( 4 + 10) < 14 => increment l. Now l = 3
A[l] + A[r] ( 6 + 10) == 16 => Found candidates (return 1)
-------------------------------------------------------------*/
/*-----------------------------------------------------------
Method 2: using Hash map
*/
# include <stdio.h>
# define bool int

void quickSort(int *, int, int);

bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
	int l, r;

	/* Sort the elements */
	quickSort(A, 0, arr_size-1);

	/* Now look for the two candidates in the sorted 
	array*/
	l = 0;
	r = arr_size-1; 
	while (l < r)
	{
		if(A[l] + A[r] == sum)
			return 1; 
		else if(A[l] + A[r] < sum)
			l++;
		else // A[i] + A[j] > sum
			r--;
	} 
	return 0;
}

/* Driver program to test above function */
int main()
{
	int A[] = {1, 4, 45, 6, 10, -8};
	int n = 16;
	int arr_size = 6;
	
	if( hasArrayTwoCandidates(A, arr_size, n))
		printf("Array has two elements with sum 16");
	else
		printf("Array doesn't have two elements with sum 16 ");

	getchar();
	return 0;
}

/* FOLLOWING FUNCTIONS ARE ONLY FOR SORTING 
	PURPOSE */
void exchange(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int A[], int si, int ei)
{
	int x = A[ei];
	int i = (si - 1);
	int j;

	for (j = si; j <= ei - 1; j++)
	{
		if(A[j] <= x)
		{
			i++;
			exchange(&A[i], &A[j]);
		}
	}
	exchange (&A[i + 1], &A[ei]);
	return (i + 1);
}

/* Implementation of Quick Sort
A[] --> Array to be sorted
si --> Starting index
ei --> Ending index
*/
void quickSort(int A[], int si, int ei)
{
	int pi; /* Partitioning index */
	if(si < ei)
	{
		pi = partition(A, si, ei);
		quickSort(A, si, pi - 1);
		quickSort(A, pi + 1, ei);
	}
}
