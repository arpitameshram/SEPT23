import java.util.Scanner;

public class simplecalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a first number: ");
        double num1 = scanner.nextDouble();
        System.out.print("Enter operator(+, -, *, /): ");
        char operator = scanner.next().charAt(0);
        System.out.print("Enter a second number: ");
        double num2 = scanner.nextDouble();

        double result;
        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                
                if (num2 == 0) {
                    System.out.println("Error! Division by zero is not allowed.");
                    return;
                }
                result=num1/num2;
                break;
            default:
                System.out.println("invalid operator ");
                return;
      }
      System.out.println("Result: " +result);
        
        
        scanner.close();
    }
}
