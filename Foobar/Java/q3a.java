public class q3a {

    static int[][] mem = new int[202][202];

    public static int answer(int n) {
        return helper(1, n) - 1;
    }

    public static int helper(int height, int brick) {
        if (mem[height][brick] != 0)
            return mem[height][brick];
        if (brick == 0)
            return 1;
        if (brick < height)
            return 0;

        int value = helper(height + 1, brick - height) + helper(height + 1, brick);
        mem[height][brick] = value;
        return value;
    }

    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        System.out.println(answer(n));
    }
}
