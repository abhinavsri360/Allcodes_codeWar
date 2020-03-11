public class Birthday {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int trial = Integer.parseInt(args[1]);
        int i, t = trial;
        double j;
        int[] b = new int[n];
        int[] sum = new int[n];
        int[] s = new int[n];

        while (trial != 0) {
            for (i = 0; i < n; i++) {
                b[i] = (int) (Math.random() * n);
            }
            for (i = 1; i < n; i++) {
                if (b[i] == b[i - 1])
                    sum[i] += 1;
            }
            trial -= 1;
        }
        for (i = 1; i < n; i++) {
            s[i] = sum[i];
            sum[i] += sum[i - 1];
        }
        for (i = 1; i < n; i++) {
            j = (double) sum[i] / t;
            if (j * 100 >= 51)
                break;
            else
                System.out.println(i + "\t" + s[i] + "\t" + j);
        }
    }
}
