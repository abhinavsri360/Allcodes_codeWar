public class Birthday {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int trial = Integer.parseInt(args[1]);
        int c = 1;
        double b;
        double[][] r;
        int[] sum = new int[n];
        sum[0] = 0;
        r = new double[trial][n];
        trial -= 1;
        while (trial != -1) {
            for (int i = 0; i < n; i++) {
                b = Math.random() * n;
                r[trial - 1][i] = b;
                for (int j = 0; j < i; j++) {
                    if (r[trial][j] == r[trial][i]) {
                        c++;
                        break;
                    }
                }
            }
            trial -= 1;
        }
    }
}
