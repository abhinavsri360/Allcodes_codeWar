public class ActivationFunction {
    public static void main(String[] args) {
        double n = Double.parseDouble(args[0]);
        System.out.println("heaviside(" + n + ") = " + heaviside(n));
        System.out.println("  sigmoid(" + n + ") = " + sigmoid(n));
        System.out.println("     tanh(" + n + ") = " + tanh(n));
        System.out.println(" softsign(" + n + ") = " + softsign(n));
        System.out.println("     sqnl(" + n + ") = " + sqnl(n));
    }

    public static double heaviside(double x) {
        if (Double.isNaN(x))
            return Double.NaN;
        else if (x < 0)
            return 0;
        else if (x == 0)
            return 0.5;
        else
            return 1.0;
    }

    public static double sigmoid(double x) {
        if (Double.isNaN(x))
            return Double.NaN;
        else
            return 1 / (1 + Math.exp(-x));
    }

    public static double tanh(double x) {
        if (Double.isNaN(x))
            return Double.NaN;
        else
            return (Math.exp(x) - Math.exp(-x)) / (Math.exp(x) + Math.exp(-x));
    }

    public static double softsign(double x) {
        if (Double.isNaN(x))
            return Double.NaN;
        else
            return x / (1 + Math.abs(x));
    }

    public static double sqnl(double x) {
        if (Double.isNaN(x))
            return Double.NaN;
        else if (x <= -2)
            return -1;
        else if (x > -2 && x < 0)
            return x + x * x / 4;
        else if (x >= 0 && x < 2)
            return x - x * x / 4;
        else
            return 1;
    }
}
