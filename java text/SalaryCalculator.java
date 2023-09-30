import java.util.Scanner;

public class SalaryCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        System.out.print("Enter basic salary: ");
        int basicSalary = scanner.nextInt();
        System.out.print("Enter grade (A/B/C): ");
        char grade = scanner.next().charAt(0);

        
        double hra = 0;
        double da = 0;
        double allow = 0;
        double pf = 0;

        
        switch (grade) {
            case 'A':
                hra = 0.2 * basicSalary;
                da = 0.5 * basicSalary;
                allow = 1700;
                pf = 0.1 * basicSalary;
                break;
            case 'B':
                hra = 0.15 * basicSalary;
                da = 0.4 * basicSalary;
                allow = 1500;
                pf = 0.08 * basicSalary;
                break;
            case 'C':
                hra = 0.1 * basicSalary;
                da = 0.3 * basicSalary;
                allow = 1300;
                pf = 0.05 * basicSalary;
                break;
            default:
                System.out.println("Invalid grade. Please enter A, B, or C.");
                scanner.close();
                return;
        }

       
        double totalSalary = basicSalary + hra + da + allow - pf;

       
        System.out.println("Total Salary: Rs. " + totalSalary);

        scanner.close();
    }
}

      
