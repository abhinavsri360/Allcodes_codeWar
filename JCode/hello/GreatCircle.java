public class GreatCircle {
    public static void main(String[] args) {
        double x1 = Double.parseDouble(args[0]);
        double y1 = Double.parseDouble(args[1]);
        double x2 = Double.parseDouble(args[2]);
        double y2 = Double.parseDouble(args[3]);
        x1 = Math.toRadians(x1);
        y1 = Math.toRadians(y1);
        x2 = Math.toRadians(x2);
        y2 = Math.toRadians(y2);
        double r = 6371.0;
        double e = (x2 - x1) / 2;
        double f = (y2 - y1) / 2;
        double h = (Math.sin(e) * Math.sin(e)) + (Math.cos(x1) * Math.cos(x2) * Math.sin(f) * Math.sin(f));
        double g = Math.sqrt(h);
        double rr = 2 * r;
        double dist = rr * Math.asin(g);
        System.out.println(dist + " kilometers");
    }
}
