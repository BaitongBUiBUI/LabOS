#include <stdio.h>
int main()
{
	int n;
	printf("How many numbers to compute for average : ");
	scanf("%d" , &n);
	
	int numbers[n];
	for (int i = 0 ; i<n; i++){
		printf("No %d: ", i+1);
		scanf("%d",numbers[i]);
	}

	int sum = 0;
	for(int i = 0; i<n; i++){
		sum += numbers[i];
	}
	float avg = sum / (float) n;
	printf("Average: %f" ,avg);
	return 0;
}
