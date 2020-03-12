public class ShannonEntropy {
    public static void main(String[] args) {
        int x = Integer.parseInt(args[0]);
        double[] a = new double[x];
        int i, n = 0;
        double sum = 0;
        while (!StdIn.isEmpty()) {
            double t = StdIn.readDouble();
            n++;
            a[(int) t - 1]++;
        }
        for (i = 0; i < x; i++) {
            if (a[i] != 0) {
                a[i] = a[i] / n;
                a[i] = a[i] * (Math.log(a[i]) / Math.log(2));
            } else
                a[i] = 0;
            sum += a[i];
        }
        StdOut.printf("%.4f\n", -sum);
    }
}
