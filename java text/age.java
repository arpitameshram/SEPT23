import java.util.Scanner;

public class AgeChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Please enter your age: ");
        int age = scanner.nextInt();
        
        if (age >= 18) {
            System.out.println("You are an adult.");
        } else {
            System.out.println("You are a minor.");
            int yearsToAdult = 18 - age;
            System.out.println("You need " + yearsToAdult + " more years to become an adult.");
        }
        
        scanner.close();
    }
}
