#include<stdio.h>
void average(int n3){

int arr[n3];

int i,sum=0,avg;

printf("Enter the numbers: ");

for(i=0; i<n3;i++){

scanf("%d", &arr[i]);

}

for(i=0; i<n3;i++){

sum=sum+arr[i];

}

avg= sum / n3;

printf("Average of the given numbers is %d", avg);

}
int main()
{
	int n;
	printf("Enter number of elements: ");

scanf("%d",&n);

average(n);

}


