import java.util.Scanner;

public class ArithmeticOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();

        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();

        
        double additionResult = num1 + num2;
        System.out.println("Addition Result: " + additionResult);

        
        double subtractionResult = num1 - num2;
        System.out.println("Subtraction Result: " + subtractionResult);

        
        double multiplicationResult = num1 * num2;
        System.out.println("Multiplication Result: " + multiplicationResult);

        
        double divisionResult = num1 / num2;
        System.out.println("Division Result: " + divisionResult);
       

        scanner.close();
    }
}
