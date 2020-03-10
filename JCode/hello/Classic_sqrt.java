public class Classic_sqrt {
    public static void main(String[] args) {
        double d, EPS = 1E-15;
        d = Double.parseDouble(args[0]);
        double t = d;
        while (Math.abs(t - d / t) > t * EPS) {
            t = (t + d / t) / 2.0;
        }
        System.out.println(t);
    }
}
