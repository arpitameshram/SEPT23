//Sum of positive square elements in an array
public class PosSq {
    public static void main(String[] args) {
        int[] numbers = {-2, 3 ,5 ,-4 ,7 ,-1 ,8 ,-6};
	int posSq=0;
	for(int i=0; i<numbers.length; i++){
		if(numbers[i]>0){
			int sq = numbers[i]*numbers[i];
			posSq += sq;
		}
	}
	System.out.println("sum of positive square elements are: " +posSq);

    }
}