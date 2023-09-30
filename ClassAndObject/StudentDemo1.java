class Student
{
	int rollNo = 1;
	int age = 20;
	double marks = 25.0;	

	public void getDetails(int r, int a, double m)
	{
		rollNo = r;
		age = a;
		marks = m;
	}

	public void printDetails()
	{
		System.out.println(rollNo+" is roll of student "+rollNo);
		System.out.println(age);
		System.out.println(marks);
		
	}
}

class StudentDemo1
{
	public static void main(String args[])
	{
		Student stud1;
		Student stud2;
	
	
		stud1 = new Student();
		stud2 = new Student();	

		stud1.getDetails(1,21,78.5);
		stud2.getDetails(2,23,74.5);

		System.out.println("Student1 details:");
		stud1.printDetails();

		System.out.println("Student2 details:");
		stud2.printDetails();
	}
}

