import java.util.Scanner;

public class CoffeeShopMenu {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.println("Welcome to the Coffee Shop!");
        System.out.println("Menu:");
        System.out.println("1. Espresso: Rs. 399");
        System.out.println("2. Latte: Rs. 299");
        System.out.println("3. Cappuccino: Rs. 199");
        System.out.println("4. Macchiato: Rs. 249");

        
        System.out.print("Enter the number of your choice: ");
        int choice = scanner.nextInt();

        int price = 0;

        
        switch (choice) {
            case 1:
                price = 399;
                break;
            case 2:
                price = 299;
                break;
            case 3:
                price = 199;
                break;
            case 4:
                price = 249;
                break;
            default:
                System.out.println("Invalid choice. Please select a valid item from the menu.");
                scanner.close();
                return;
        }

        
        
        System.out.println(" cost: Rs. " + price);

        scanner.close();
    }
}
