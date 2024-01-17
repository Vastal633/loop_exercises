//...............................................................Q1 read n numbers and prints its evarage................................................................................
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


//...............................................................Q2 find num that divided by 5 and 7......................................................................................

#include<stdio.h>

int main(){
	int n,divisable_num,garbage_num;
	printf("enter the value of n: ");
	scanf("%d",&n);

	for(int i=1; i<n;i++){
		if(i%5==0 || i%7==0){
			divisable_num = i;
			printf("%d\n",divisable_num);
			
		}
		
		else{
			garbage_num = i;	
		}	
    }
	return 0;
}

//..............................................................................Q3 print sum of digits...................................................................................

#include<stdio.h>

int main(){
	int n,sum=0,digit;
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	while(n!=0){
		digit = n%10;
		sum = sum + digit;
		n = n/ 10;
	}	
	
	printf("the sum of digiti is: %d",sum);
	return 0;
}
//........................................................Q4 print the sum of odd numgers and print all odd numbers........................................................................

#include<stdio.h>

int main(){
	int n,odd_num,even_num,sum=0;
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++){
		if(i%2!=0){
			odd_num = i;
			sum = sum + i;
			printf(" %d ",odd_num);
		}
		
		else{
			even_num= i;
		}
	}
	
	printf("\nthe sum of odd digits is: %d",sum);
	return 0;
}
