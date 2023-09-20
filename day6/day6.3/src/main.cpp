#include<iostream>
using namespace std;
class Complex{
public:
	int real;
	int imag;
public:
	void printRecord(void){
		cout<<"Real number : "<<this->real<<endl;
		cout<<"Imag number : "<<this->imag<<endl;
	}
};
int main (void){
	Complex c1{10,20};
	return 0;
}



