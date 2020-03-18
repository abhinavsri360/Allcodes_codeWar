public class Ramanujan {
    public static void main(String[] args) {
        long n = Long.parseLong(args[0]);
        System.out.println(isRamanujan(n));
    }

    public static boolean isRamanujan(long n) {
        int c = 0;
        for (long i = 1; i <= Math.ceil(Math.pow(n, 1.0 / 3)) + 1; i++) {
            long t = (long) (Math.pow(i, 3) + Math.pow(Math.ceil(Math.pow((n - Math.pow(i, 3)), 0.33)), 3));
            if (t == n)
                c++;
        }
        System.out.println(c);
        if (c >= 1)
            return true;
        else
            return false;
    }
}
