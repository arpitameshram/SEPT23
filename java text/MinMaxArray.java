//Smallest and largest element in an array

class MinMaxArray{
    public static void main(String args[]){
         int[] numbers = {5, 3, 9, 1, 7, 2, 8, 4, 6};
	 int min = numbers[0];
	 int max = numbers[0];
	 
	 for(int i = 1;i < numbers.length; i++){
	     if (numbers[i]<min) {
	 	min = numbers[i];
	     } 
	     if (numbers[i]>max) {
		max = numbers[i];
             }
         }
         System.out.println("Smallest Element:" +min);
	 System.out.println("Largest Element:" +max);
    }
}
