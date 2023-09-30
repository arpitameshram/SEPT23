//Repeating Elements In Array

public class RepeatingElementsInArray {
    public static void main(String[] args) {
        int[] numbers = {5, 3, 9, 1, 7, 2, 8, 4, 6, 5, 3, 1};

        System.out.println("Repeating elements in the error:");

        for (int i = 0; i < numbers.length - 1; i++) {
           for(int j=i+1;j<numbers.length;j++){
		if(numbers[i]==numbers[j]){
			 System.out.println(numbers[i]);
			 break;
       		 }

             }
            
        }
    }
}

