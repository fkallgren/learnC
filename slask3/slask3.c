#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define A_SIZE 10


void sort(int *arr)
{
	int tmp;
	size_t size, size_ptr;

	size_ptr = sizeof(arr)/sizeof(arr[0]);
	size = sizeof(arr);


	printf("Size: %zu\n\n", size);
	printf("SizeP: %zu\n\n", size_ptr);
}


int main(int argc, char *argv[])
{
	
	srand(time(NULL));
	int sort_array[A_SIZE];
	int r = rand();
	
	printf("RANDMAX: %d\n", RAND_MAX);
	printf("Random: %d\n", r);

	//Fill array with random data
	
	for(int i=0; i < A_SIZE; i++)
		sort_array[i] = rand();

	//Print it
	for(int j=0; j< A_SIZE;j++)
		printf("sort_array[%d] = %d\n", j,sort_array[j]);


	size_t size = sizeof(sort_array)/sizeof(sort_array[0]);


	sort(sort_array);
}
