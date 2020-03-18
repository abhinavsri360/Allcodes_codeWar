public class Inversions {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        long k = Long.parseLong(args[1]);
        int[] a = generate(n, k);
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    public static int[] generate(int n, long k) {
        int[] a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = i;
        if (n == 0 || k == 0)
            return a;
        int i = (int) count(a);
        int j = 1;
        while (i != k) {
            a[n - j - 1] = a[n - j - 1] + a[n - 1];
            a[n - 1] = a[n - j - 1] - a[n - 1];
            a[n - j - 1] = a[n - j - 1] - a[n - 1];
            i = (int) count(a);
            j++;
            j = j % 10;
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
