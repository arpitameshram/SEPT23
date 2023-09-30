//Second smallest element in an array

public class SecondSmallestElement {
    public static void main(String[] args) {
        int[] numbers = {5, 3, 9, 1, 7, 2, 8, 4, 6};

        int smallest = Integer.MAX_VALUE;
        int secondSmallest = Integer.MAX_VALUE; 
        
        for (int i = 0; i < numbers.length; i++) {
            int current = numbers[i];

            if (current < smallest) {
                secondSmallest = smallest;
                smallest = current;
            } else if (current < secondSmallest && current != smallest) {
                secondSmallest = current;
            }
        }

        
        if (secondSmallest == Integer.MAX_VALUE) {
            System.out.println("There is no second smallest element in the array.");
        } else {
            System.out.println("Second smallest element in the array: " + secondSmallest);
        }
    }
}
