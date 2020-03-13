public class AudioCollage {
    public static void main(String[] args) {
        double[] a = StdAudio.read("singer.wav");
        double[] b = amplify(a, 0.6);

        a = StdAudio.read("dialup.wav");
        double[] d = reverse(a);

        a = StdAudio.read("buzzer.wav");
        double[] c = StdAudio.read("cow.wav");
        double[] e = merge(a, c);

        a = StdAudio.read("exposure.wav");
        c = StdAudio.read("beatbox.wav");
        double[] f = mix(a, c);

        a = StdAudio.read("beatbox.wav");
        double[] g = changeSpeed(a, 1.6);

        double[] h = new double[b.length + d.length + e.length + f.length + g.length];

        for (int i = 0; i < b.length; i++)
            h[i] = b[i];
        for (int i = 0; i < d.length; i++)
            h[b.length + i] = d[i];
        for (int i = 0; i < e.length; i++)
            h[b.length + d.length + i] = e[i];
        for (int i = 0; i < f.length; i++)
            h[b.length + d.length + e.length + i] = f[i];
        for (int i = 0; i < g.length; i++)
            h[b.length + d.length + e.length + f.length + i] = g[i];

        StdAudio.play(h);
    }

    public static double[] amplify(double[] a, double alpha) {
        double[] c = new double[a.length];
        for (int i = 0; i < a.length; i++) {
            c[i] = a[i] * alpha;
        }
        return c;
    }

    public static double[] reverse(double[] a) {
        double[] c = new double[a.length];
        for (int i = 0; i < a.length; i++) {
            c[i] = a[a.length - i - 1];
        }
        return c;
    }

    public static double[] merge(double[] a, double[] b) {
        double[] c = new double[a.length + b.length];
        for (int i = 0; i < a.length; i++) {
            c[i] = a[i];
        }
        for (int i = a.length; i < a.length + b.length; i++) {
            c[i] = b[i - a.length];
        }
        return c;
    }

    public static double[] mix(double[] a, double[] b) {
        double[] c;
        if (a.length > b.length) {
            c = new double[a.length];
            for (int i = 0; i < b.length; i++) {
                c[i] = a[i] + b[i];
            }
            for (int i = 0; i < a.length - b.length; i++) {
                c[b.length + i] = a[b.length + i];
            }
        } else {
            c = new double[b.length];
            for (int i = 0; i < a.length; i++) {
                c[i] = a[i] + b[i];
            }
            for (int i = 0; i < b.length - a.length; i++) {
                c[a.length + i] = b[a.length + i];
            }
        }
        return c;
    }

    public static double[] changeSpeed(double[] a, double alpha) {
        double[] c = new double[(int) Math.floor(a.length / alpha)];
        for (int i = 0; i < c.length; i++) {
            c[i] = a[(int) Math.floor(i * alpha)];
        }
        return c;
    }
}
