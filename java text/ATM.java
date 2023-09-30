import java.util.Scanner;

public class ATM {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter your account balance: ");
        double accountBalance = scanner.nextDouble();

        System.out.print("Enter your amount to withdrawl: ");
        double withdrawalAmount = scanner.nextDouble();
 
        
        if(withdrawalAmount <= accountBalance) {
         accountBalance -= withdrawalAmount;
         System.out.println("Withdrawal successful.");
         System.out.println("New Balance: " +accountBalance);
        }else{
         System.out.println("insufficient funds");
    }
    scanner.close();
}
}