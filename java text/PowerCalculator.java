import java.util.Scanner;

public class PowerCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the base (x): ");
        double x = scanner.nextDouble();
        System.out.print("Enter the exponent (n): ");
        int n = scanner.nextInt();

        double result = Math.pow(x, n);

        System.out.println(x + " raised to the power " + n + " is: " + result);

        scanner.close();
    }
}
