//...............................................................Q1 read n numbers and prints its evarage....................................................................................
#include<stdio.h>
int main(){
	float n,sum=0;
	float avg;
	printf("enter the value of n: ");
	scanf("%f",&n);
	for(int i=1;i<=n;i++){
		sum = sum + i;// sum the numbers
	}
	
	printf("the sum of all numbers is :%f\n",sum);
	avg = sum / n;
	printf("the average of num is %f",avg);

	return 0;
}


//...............................................................Q1 read n numbers and prints its evarage....................................................................................

