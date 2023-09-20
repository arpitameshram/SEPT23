#include<iostream>
using namespace std;
int main(){
int *ptrNumber = NULL; //Initialzation
 int number = 10; //Initialzation
 ptrNumber = &number; //Assignment
 //How will you print value 10
 printf("Value : %d\n", number);
 printf("Value : %d\n", *ptrNumber);
}
