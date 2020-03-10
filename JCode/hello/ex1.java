public class ex1 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE, sum = 0;
        for (int i = 0; i < 5; i++) {
            double r = Math.random();
            System.out.println((int) (n * r));
            if ((int) (n * r) < min)
                min = (int) (n * r);
            if ((int) (n * r) > max)
                max = (int) (n * r);
            sum = sum + (int) (n * r);
        }
        System.out.println("Minimum:" + min);
        System.out.println("Maximum:" + max);
        System.out.println("Average:" + sum / 5);
    }
}
