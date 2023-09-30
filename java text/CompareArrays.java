//Finding the array type
public class ArrayTypeExample {
    public static void main(String[] args) {
        int[] intArray = new int[5];
        double[] doubleArray = new double[10];
        String[] stringArray = new String[3];

        // Determine the type of the arrays
        Class intArrayType = intArray.getClass();
        Class doubleArrayType = doubleArray.getClass();
        Class stringArrayType = stringArray.getClass();

        // Print the type of the arrays
        System.out.println("intArray is of type: " + intArrayType.getName());
        System.out.println("doubleArray is of type: " + doubleArrayType.getName());
        System.out.println("stringArray is of type: " + stringArrayType.getName());
    }
}

