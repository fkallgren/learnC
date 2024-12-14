#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define MAXLENGTH 10


void sortit(int *arr, size_t size, int asc)
{
	int i = 0;
	int j = MAXLENGTH-1;
	int tmp;	
	int seeker;
	
	printf("ASC: %d\n", asc);


	printf("-------------------------------------\n");


	for(i=0;i<MAXLENGTH-1;i++)
	{
		for(j=MAXLENGTH-1; j > i; j--)
		{

			if(arr[j-1] < arr[j])
			{
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
		}

	}
	
		for(i=0; i<MAXLENGTH;i++)
			printf("arr[i]: %d\n", arr[i]);

		printf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±\n");

		for(i=MAXLENGTH-1; i<=0; i--)
			printf("bak_arr[i]: %d\n", arr[i]);

}



int main(int argc, char **argv)
{

	int arr[MAXLENGTH];
	int i = 0;
	size_t size;

	srand(time(NULL));

	for(i=0; i<MAXLENGTH;i++)
		arr[i] =  rand()%10;

	
	for(i=0; i<MAXLENGTH;i++)
		printf("arr[i]: %d\n", arr[i]);
	size = sizeof(arr)/sizeof(arr[0]);

	sortit(arr, size,0);	


}
