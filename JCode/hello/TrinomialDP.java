public class TrinomialDP {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int k = Integer.parseInt(args[1]);
        System.out.println(trinomial(n, k));
    }

    public static long trinomial(int n, int k) {
        long[][] a = new long[n + 1][n + 2];
        a[0][0] = 0;
        a[0][1] = 1;

        a[1][0] = a[1][1] = a[1][2] = 1;

        for (int i = 2; i < n + 1; i++) {
            for (int j = 1; j < n + 2; j++) {
                if (j < n + 1)
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
                else
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                a[i][0] = a[i][2];
            }
        }
        if (k > 0)
            return a[n][k + 1];
        else
            return a[n][-k + 1];
    }
}
