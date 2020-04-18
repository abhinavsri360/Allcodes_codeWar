import java.util.Random;

class bday {
    public static double calculate(int size, int count) {
        // TODO -- add your code here
        int c = 0, n;
        boolean flag = false;
        Random r = new Random();
        for (int i = 1; i <= count; i++) {
            r.setSeed(i);
            int[] bday = new int[365];
            for (int j = 0; j < size; j++) {
                n = r.nextInt(365);
                bday[n]++;
                if (bday[n] >= 2) {
                    c++;
                    break;
                }
            }
        }
        return (c * 100.0) / count;
    }

    public static void main(String[] args) {
        int size, count;
        size = Integer.parseInt(args[0]);
        count = Integer.parseInt(args[1]);
        System.out.println(calculate(size, count));
    }
}
