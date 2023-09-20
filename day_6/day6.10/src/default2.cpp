#include<iostream>
using namespace std;
#define DEFAULT_VALUE 0
void sum(int num1, int num2, int num3 = DEFAULT_VALUE, int num4= DEFAULT_VALUE,int num5= DEFAULT_VALUE);


int main( int argc, char *argv[ ] ){
	sum(10, 20);
	sum(10, 20, 30);
	sum(10, 20, 30, 40);
	sum(10, 20, 30, 40, 50);
	return 0;
}
void sum(int num1, int num2, int num3 , int num4 ,int num5 ){
	int result = num1 + num2 + num3 + num4 + num5;
	cout<<"Result : "<< result << endl;

}
