public class Divisors {
    public static void main(String[] args) {
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        System.out.println("gcd(" + a + ", " + b + ") = " + gcd(a, b));
        System.out.println("lcm(" + a + ", " + b + ") = " + lcm(a, b));
        System.out.println("areRelativelyPrime(" + a + ", " + b + ") = " + areRelativelyPrime(a, b));
        System.out.println("totient(" + a + ") = " + totient(a));
        System.out.println("totient(" + b + ") = " + totient(b));
    }

    public static int gcd(int a, int b) {
        if (a == 0 && b == 0)
            return 0;
        else {
            int t;
            a = Math.abs(a);
            b = Math.abs(b);
            while (b != 0) {
                t = a;
                a = b;
                b = t % a;
            }
            return a;
        }
    }

    public static int lcm(int a, int b) {
        if (a == 0 && b == 0)
            return 0;
        else
            return Math.abs(a) * Math.abs(b) / gcd(a, b);
    }

    public static boolean areRelativelyPrime(int a, int b) {
        if (gcd(a, b) == 1 || gcd(a, b) == 0)
            return true;
        else
            return false;
    }

    public static int totient(int n) {
        int c = 0;
        if (n <= 0)
            return 0;
        else {
            for (int i = 1; i <= n; i++) {
                if (areRelativelyPrime(i, n))
                    c++;
            }
        }
        return c;
    }
}
