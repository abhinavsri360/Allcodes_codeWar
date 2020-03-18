public class Inversions {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        long k = Long.parseLong(args[1]);
        int[] a = generate(n, k);
        if (a == null) {
            System.out.println("");
            return;
        }
        for (int i = 0; i < a.length; i++)
            System.out.print(a[i] + " ");
        System.out.println();
    }

    public static int[] generate(int n, long k) {
        int[] a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = i;
        int i = 0, j = 1, c = n;
        if (n == 0 || k == 0)
            return a;
        if (k > n * (n - 1) / 2)
            return null;
        while (count(a) != k) {
            a[i] = a[i] + a[j];
            a[j] = a[i] - a[j];
            a[i] = a[i] - a[j];
            i++;
            j++;
            if (i == c - 1) {
                i = 0;
                j = 1;
                c--;
            }
        }
        return a;
    }

    public static long count(int[] a) {
        long c = 0;
        for (int i = 0; i < a.length; i++) {
            for (int j = i + 1; j < a.length; j++) {
                if (a[j] < a[i])
                    c++;
            }
        }
        return c;
    }
}
