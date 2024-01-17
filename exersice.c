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

//....................................................................Q5 reverse the numbers...............................................................................................

#include<stdio.h>

int main(){
	int n,digit,reverse_num=0;
	printf("enter any numbers: ");
	scanf("%d",&n);
	
	while(n!=0){
		digit = n%10;//give last digit
		reverse_num = reverse_num * 10 + digit;
		n = n /10;
	}
	
	printf("reversed numbers are: %d",reverse_num);
	return 0;
}


//..........................................................find sum of first and last digit and print it................................................................................

#include<stdio.h>

int main(){
 int n=1,first_digit,last_digit,sum;
 printf("enter the value of n: ");
 scanf("%d",&n);
	
	last_digit = n%10;
	printf("%d\n",last_digit);
	
	
	while(n>=10){
		n = n /10;
		printf("noe the value of n is: %d\n",n);
	}
	
	first_digit = n;
	printf("%d\n",first_digit);
	sum = first_digit + last_digit;
	
	printf("%d\n",sum);
	return 0;
}

