//WAP To Add, Substract, multiply, division
#include <stdio.h>
int main()
{
	int first_number, second_number, add, substract, multiply;
	double division;
	printf("Enter any two numbers \n");
	scanf("%d%d",&first_number, &second_number);
	add = first_number + second_number;
	substract = first_number - second_number;
	multiply = first_number * second_number;
	division =(double) first_number / second_number;
	printf("The Sum of Two Numbers is =%d \n The Subtraction of Two Numbers is =%d \n The Multiplication of Two Numbers is =%d \n The Division of Two Numbers is =%lf ",add, substract, multiply, division);
	return 0; 
	
}
