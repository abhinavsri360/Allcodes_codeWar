public class RandomWalkers {
    public static void main(String[] args) {
        int r = Integer.parseInt(args[0]);
        int trial = Integer.parseInt(args[1]);
        int a = 0, b = 0, t = trial;
        double s, steps = 0.0;
        while (trial != 0) {
            while (Math.abs(a) + Math.abs(b) != r) {
                if (Math.random() < 0.5) {
                    if (Math.random() < 0.5)
                        a--;
                    else
                        a++;
                } else {
                    if (Math.random() < 0.5)
                        b--;
                    else
                        b++;
                }
                steps++;
            }
            a = 0;
            b = 0;
            trial--;
        }
        s = (steps / t);
        System.out.println("average number of steps =" + s);
    }
}
