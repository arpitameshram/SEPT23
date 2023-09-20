#include<stdio.h>

int main(){
	int num1,num2,num3;
	printf("pointers: swap elements using pointers: \n");
	printf("Input the value of 1st element" );
	    scanf("%d",&num1);
	printf("Input the value of 2nd element ");
		scanf("%d",&num2);
	printf("Input the value of 3rd element ");
		scanf("%d",&num3);
	printf("\n the values before swapping are:\n");
	printf("element 1 = %d\n",num1);
	printf("element 2 = %d\n",num2);
	printf("element 3 = %d\n",num3);

	int temp = num1;
	    num1 = num3;
	    num3 = num2;
	    num2 = temp;

	printf("\n the values after swapping are:\n");
	printf("element 1 = %d\n",num1);
	printf("element 2 = %d\n",num2);
	printf("element 3 = %d\n",num3);

	return 0;




}




