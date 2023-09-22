#include<iostream>
using namespace std;
int main( void ){
 int num1 = 10;
 int &num2 = num1;
 const int &num3 = num1;
 ++ num2;

 cout<<"Num1 : "<< num1<<endl;
 cout<<"Num2 : "<< num2<<endl;
 cout<<"Num3 : "<< num3<<endl;
 return 0;
}



