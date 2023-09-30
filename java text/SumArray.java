//Sum of elements in an array

class SumArray{
    public static void main(String args[]){
         int[] numbers = {5, 3, 9, 1, 7, 2, 8, 4, 6};
	 int sum = 0;
	 for(int i =0;i<numbers.length; i++){
		sum = sum+numbers[i];
	 }
	 System.out.println("Sum of elements Elements:" +sum);
    }
}
