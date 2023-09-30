public class Student {
    // Attributes of the Student class
    private String name;
    private int age;
    private char grade;

    // Constructor to initialize the attributes
    public Student(String name, int age, char grade) {
        this.name = name;
        this.age = age;
        this.grade = grade;
    }

    // Method to display student information
    public void displayStudentInfo() {
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
        System.out.println("Student Grade: " + grade);
    }

    public static void main(String[] args) {
        // Create a Student object
        Student student1 = new Student("Alice", 18, 'A');

        // Display the student's information
        student1.displayStudentInfo();
    }
}

