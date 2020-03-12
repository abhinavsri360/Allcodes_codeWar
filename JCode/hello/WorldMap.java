public class WorldMap {
    public static void main(String[] args) {
        StdDraw.enableDoubleBuffering();
        int w = StdIn.readInt();
        int h = StdIn.readInt();
        double[] x, y;
        StdDraw.setCanvasSize(w, h);
        StdDraw.setXscale(0, w);
        StdDraw.setYscale(0, h);
        while (!StdIn.isEmpty()) {
            String name = StdIn.readString();
            int v = StdIn.readInt();
            x = new double[v];
            y = new double[v];
            for (int i = 0; i < v; i++) {
                x[i] = StdIn.readDouble();
                y[i] = StdIn.readDouble();
            }
            StdDraw.polygon(x, y);
        }
        StdDraw.show();
    }
}
