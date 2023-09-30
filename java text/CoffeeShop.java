import java.util.Scanner;

public class CoffeeShop {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        System.out.println("Welcome to the Coffee Shop Menu!\n");
        System.out.println("Menu:");
        System.out.println("1. Espresso: Rs. 399\n2. Latte: Rs. 299\n3. Cappuccino: Rs. 199\n4. Macchiato: Rs. 259");

        
        System.out.print("\nEnter the number of your choice: ");
        int choice = scanner.nextInt();

        double totalCost = 0.0;

        
        switch (choice) {
            case 1:
                totalCost = 399;
                break;
            case 2:
                totalCost = 299;
                break;
            case 3:
                totalCost = 199;
                break;
            case 4:
                totalCost = 259; // Price for Macchiato
                break;
            default:
                System.out.println("Invalid choice. Please select a valid item from the menu.");
                scanner.close();
                return; // Exit the program
        }

        
        System.out.println("\nTotal cost: Rs. " + totalCost);

        scanner.close();
    }
}
