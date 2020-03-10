public class RandomWalker {
    public static void main(String[] args) {
        int r = Integer.parseInt(args[0]);
        int a = 0, b = 0, p = 1, steps = 0;
        System.out.println("(" + a + ", " + b + ")");
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
            System.out.println("(" + a + ", " + b + ")");
            steps++;
        }
        System.out.println("steps =" + steps);
    }
}
