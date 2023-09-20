#include <iostream>
using namespace std;

struct Employee {
    char name[30];
    int empid;
    float salary;
    void accept(){    //to input
    	cout<<"enter name";
    	cin>>name;
    	cout<<"enter empid";
    	cin>>empid;
    	cout<<"enter salary";
    	cin>>salary;
    }
    void display(){       //to display
    	cout<<"\n Name is :"<<name;
    	cout<<"\n id is :"<<empid;
    	cout<<"\n salary is :"<<salary;
    }
};

int main() {
	struct Employee emp;
	emp.accept();//call
	emp.display();//call



    return 0;
}


