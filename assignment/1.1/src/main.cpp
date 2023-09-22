#include<iostream>
#include<string>
using namespace std;
class Students{
private:
	string name;
	int rollNumber;
	float marks;
	char grade;


public:
/*
	void acceptInformation(void){
       cout<<"student name : "<<endl;
       cin>>name;
       cout<<"student rollNumber : "<<endl;
       cin>>rollNumber;
       cout<<"student marks : "<<endl;
       cin>>marks;
       }

*/
	void setName(string name){
		this->name=name;
	}
	void setRollNumber(int  r){
			this->rollNumber=r;
		}
	void setMarks(float mar){
			this->marks =mar;
		}
	void printInformation(void){
		cout<<"name : "<<this->name<<endl;
		cout<<"rollNumber : "<<this->rollNumber<<endl;
		cout<<"marks : "<<this->marks<<endl;
		cout<<"grade : "<<this->grade<<endl;

	}
	void calculateGrade(){
	float check =	this->marks;
	if (check >= 90 && check <=100)
		this->grade='A';
	if (check>=80 && check<=89)
		this->grade='B';
	if (check>=70 && check<=79)
			this->grade='C';
	if (check>=60 && check<=69)
			this->grade='B';
	if (check < 60)
			this->grade='B';


	};



};

int main(){
	Students s1;
	s1.setName("arpita");
	s1.setRollNumber(9);
	s1.setMarks(98);
	s1.calculateGrade();
	s1.printInformation();


	return 0;

}
