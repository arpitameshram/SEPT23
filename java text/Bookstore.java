import java.util.Scanner;

public class Bookstore {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of books purchased: ");
        int numberOfBooks = scanner.nextInt();

        System.out.print("Enter the unit price of each book: ");
        double unitPrice = scanner.nextDouble();

        double totalCost = numberOfBooks * unitPrice;

        if (numberOfBooks >= 6 && numberOfBooks <= 10) {
            double discount = totalCost * 0.10; 
            totalCost -= discount;
        } else if (numberOfBooks > 10) {
            double discount = totalCost * 0.15; 
            totalCost -= discount;
        }

        System.out.println("Total cost: " + totalCost);

        scanner.close();
    }
}

