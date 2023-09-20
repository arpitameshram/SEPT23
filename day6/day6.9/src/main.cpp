
#include<iostream>
using namespace std;
class Test{
private:
	int number;
public:
	Test ( void ){
		this->number = 0;
		this->number = this->number + 10;
	}
	void showRecord( void ){
		this->number = this->number +2;
		cout<<"Number : "<<this->number<<endl;
	}
	void printRecord(void){
		this->number = this->number +3;
		cout<<"Number : "<<this->number<<endl;
	}
};
int main ( void){
	Test t;
	t.showRecord( );
	t.printRecord( );
	t.printRecord( );
	t.showRecord( );
	return 0;
}
