#include<cstdio>
int main( void ){
	int number = 10;
	int* ptrNumber;
	printf("Size of number : %lu\n",sizeof( number));
	printf("Size of ptrNumber : %lu\n",sizeof(ptrNumber));
	return 0;
}
int main1(void){
	int number = 10;
	printf("value of Number : %d\n",number);
	printf("address of number :%p\n", &number);
	return 0;

}




