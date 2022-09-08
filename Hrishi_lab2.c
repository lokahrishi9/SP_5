#include<stdio.h>
#include<stdlib.h>
#include <time.h> 
int main(int argc, char *argv[])
{
    int N=0,i=0,j=0;
	double temp=0;
	printf("Enter the number of elements to store in array: ");
	scanf("%d",&N);
	srand48((unsigned int)time(NULL)); 
	double arr[N];
	for(i=0;i<N;i++)
	{
		arr[i]=drand48(); 
	}
	printf("The unsorted array is : ");
	for(i=0;i<N;i++)
	{
		printf("%lf ",arr[i]);
	}
	printf("\n");


	for(i=0;i<N;i++)
	{
		for(j=i;j<N;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The sorted array is : ");
		for(i=0;i<N;i++)
		{
			printf("%lf ",arr[i]);
		}
	printf("\n");
	return 0;

}

/*command for compiling: gcc insertion.c*/
/*command for getting output: ./a.out*/

