#include<iostream>
using namespace std;
int main( void ){
 int num1 = 10;
 int &num2 = num1;
 ++ num1; //11
 ++ num2; //12
 cout<<"Num1 : "<< num1<<endl; //12
 cout<<"Num2 : "<< num2<<endl; //12
 return 0;
}



