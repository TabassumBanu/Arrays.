//:Algorithm to reverse an array
// Iterative C program to reverse an array
#include<stdio.h>

/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int size) {
    int halfLen = size/2;
    int i, temp;
	for (i=0; i<halfLen; i++) {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}


/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
	printf("%d ", arr[i]);

printf("\n");
} 

/* Driver function to test above functions */
int main() 
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr)/sizeof(arr[0]);
	printArray(arr, 6);
	reverseArray(arr,size);
	printf("Reversed array is \n");
	printArray(arr, 6); 
	return 0;
}
