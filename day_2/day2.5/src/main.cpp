/*
 * main.cpp
 *
 *  Created on: 13-Sep-2023
 *      Author: Lenovo
 */
#include<iostream>
using namespace std;
int main( void ){
 const int num1 = 10; //OK
 const int *const ptrNumber = &num1;
 //num1 = 50; //Not OK
 //*ptrNumber = 50; //Not OK:Dereferencing
 printf("Num1 : %d\n", num1); //10
 printf("Num1 : %d\n", *ptrNumber); //10: Dereferencing
 const int num2 = 20; //OK
 //ptrNumber = &num2; //Not OK
 return 0;
}




/*int main( void ){
 int num1 = 10;
 int *const ptrNumber = &num1;
 //num1 = 50; //OK
 *ptrNumber = 50;
 printf("Num1 : %d\n", num1); //50
 printf("Num1 : %d\n", *ptrNumber); //50: Dereferencing
 int num2 = 20;
 //ptrNumber = &num2; //Not OK
 return 0;
}

*/


