#include<cstdio>
int main (void){
		int num1= 7;
		int num2= 5;
		int num3= 4;
		printf("In values before swapping \n num1= %d \n num2=%d \n num3=%d",num1,num2,num3);
		int *x=&num1;
		int *y=&num2;
		int *z=&num3;
		int temp;
		temp= *z;
		*z=*x;
		*x=*y;
		*y=temp;
		printf("\n values after swapping \n num1= %d \n num2= %d \n num3= %d ",num1,num2,num3);
		return 0;

}
