//Sum of positive square elements in an array
public class SumPositiveSquares {
    public static void main(String[] args) {
        int[] numbers = { -2, 3, 5, -4, 7, -1, 8, -6 };

        int sumOfPositiveSquares = 0;

    
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] > 0) { 
                int square = numbers[i] * numbers[i]; 
                sumOfPositiveSquares += square; 
            }
        }

        System.out.println("Sum of positive square elements: " + sumOfPositiveSquares);
    }
}
