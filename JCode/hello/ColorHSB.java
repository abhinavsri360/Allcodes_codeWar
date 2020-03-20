public class ColorHSB {
    private int hue;
    private int saturation;
    private int brightness;

    public ColorHSB(int h, int s, int b) {
        if (h < 0 || h > 359 || s < 0 || s > 100 || b < 0 || b > 100)
            throw new IllegalArgumentException("False Arguments");
        hue = h;
        saturation = s;
        brightness = b;
    }

    public String toString() {
        return "(" + hue + ", " + saturation + ", " + brightness + ")";
    }

    public boolean isGrayscale() {
        if (saturation == 0 || brightness == 0)
            return true;
        else
            return false;
    }

    public int distanceSquaredTo(ColorHSB that) {
        return Math.min((hue - that.hue) * (hue - that.hue), (360 - Math.abs(hue - that.hue)) * (360 - Math.abs(hue - that.hue))) + (saturation - that.saturation) * (saturation - that.saturation) + (brightness - that.brightness) * (brightness - that.brightness);
    }

    public static void main(String[] args) {
        int h = Integer.parseInt(args[0]);
        int s = Integer.parseInt(args[1]);
        int b = Integer.parseInt(args[2]);
        ColorHSB c = new ColorHSB(h, s, b);
        int min = Integer.MAX_VALUE, t;
        String u = "", v = "";
        while (!StdIn.isEmpty()) {
            u = StdIn.readString();
            h = StdIn.readInt();
            s = StdIn.readInt();
            b = StdIn.readInt();
            ColorHSB d = new ColorHSB(h, s, b);
            t = c.distanceSquaredTo(d);
            if (t < min) {
                min = t;
                v = u + " " + d.toString();
            }
        }
        System.out.println(v);
    }
}
