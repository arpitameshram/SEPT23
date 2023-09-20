#include<iostream>
using namespace std;
int defaultArgument = 0;
void sum(int num1, int num2, int num3 = defaultArgument, int num4= defaultArgument,int num5= defaultArgument){
	int result = num1 + num2 + num3 + num4 + num5;
	cout<<"Result : "<< result << endl;
}
int main( void ){
	sum(10, 20);
	sum(10, 20, 30);
	sum(10, 20, 30, 40);
	sum(10, 20, 30, 40, 50);
	return 0;
}


