#include<cstdio>
int main( void ){
 int *ptrNumber = NULL;
 int num1 = 10;
 ptrNumber = &num1;
 //num1 = 50; //OK
 *ptrNumber = 50; //Dereferencing
 printf("Num1 : %d\n", num1); //50
 printf("Num1 : %d\n", *ptrNumber); //50: Dereferencing
 int num2 = 20;
 ptrNumber = &num2;
 //num2 = 60; //OK
 *ptrNumber = 60; //Dereferencing
 printf("Num2 : %d\n", num2); //60
 printf("Num2 : %d\n", *ptrNumber); //60:Dereferencing
 return 0;
}




/*int main( void ){
 const int number = 10; //Initialization
 printf("Number : %d\n", number); //10
 //number = number + 5; //Not OK
 return 0;
}





/*int main( void ){
 int number = 10; //Initialization
 printf("Number : %d\n", number); //10
 number = number + 5;
 printf("Number : %d\n", number); //15
 return 0;
}/*




