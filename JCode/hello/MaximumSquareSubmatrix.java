public class MaximumSquareSubmatrix {
    public static void main(String[] args) {
        int n = StdIn.readInt();
        int[][] a = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = StdIn.readInt();
            }
        }
        System.out.println(size(a));
    }

    public static int size(int[][] a) {
        int c = a[0][0];
        for (int i = 1; i < a.length; i++) {
            for (int j = 1; j < a.length; j++) {
                if (a[i][j] == 1)
                    a[i][j] = Math.min(a[i][j - 1], Math.min(a[i - 1][j], a[i - 1][j - 1])) + 1;
                if (c < a[i][j])
                    c = a[i][j];
            }
        }
        return c;
    }
}
