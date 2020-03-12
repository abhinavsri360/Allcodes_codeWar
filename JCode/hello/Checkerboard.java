public class Checkerboard {
    public static void main(String[] args) {
        StdDraw.enableDoubleBuffering();
        int n = Integer.parseInt(args[0]);
        double a = 1.0 / (2 * n);
        for (double i = 0.0; i < n; i++) {
            for (double j = 0.0; j < n; j++) {
                if ((i + j) % 2 == 0) {
                    StdDraw.setPenColor(StdDraw.BLUE);
                    StdDraw.filledSquare(a + j / n, a + i / n, a);
                } else {
                    StdDraw.setPenColor(StdDraw.LIGHT_GRAY);
                    StdDraw.filledSquare(a + j / n, a + i / n, a);
                }
            }
        }
        StdDraw.show();
    }
}
