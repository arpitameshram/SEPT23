public class NestedLoopDemo {
    public static void main(String[] args) {
        int i;
        for (i = 3; i > 0; i--) {
            if (i % 2 == 0) {
                continue;
            }
            for (int j = 3; j > 0; j--) {
                if (j % 2 == 0) {
                    continue;
                }
                System.out.println("J " + j);
            }
            System.out.println("I " + i);
        }
    }
}
