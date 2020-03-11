public class DiscreteDistribution {
    public static void main(String[] args) {
        int[] a;
        a = new int[args.length];
        a[0] = 0;
        int m = Integer.parseInt(args[0]);
        for (int i = 1; i < args.length; i++) {
            a[i] = Integer.parseInt(args[i]);
        }
        for (int i = 1; i < a.length; i++) {
            a[i] += a[i - 1];
        }
        while (m != 0) {
            int r = (int) (Math.random() * (a[a.length - 1]));
            for (int i = 0; i < a.length - 1; i++) {
                if (r < a[i + 1]) {
                    System.out.print(i + 1 + " ");
                    break;
                }
            }
            m--;
        }
    }
}
