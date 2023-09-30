//reverse array

public class ArrayReversal {
    public static void main(String[] args) {
        int[] numbers = {5, 3, 9, 1, 7, 2, 8, 4, 6};

        // Reverse the array in place
        int length = numbers.length;

        for (int i = 0; i < length / 2; i++) {
            int temp = numbers[i];
            numbers[i] = numbers[length - 1 - i];
            numbers[length - 1 - i] = temp;
        }

        // Print the reversed array
        System.out.println("Reversed array:");
        for (int number : numbers) {
            System.out.print(number + " ");
        }
    }
}

