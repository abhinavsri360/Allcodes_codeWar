public class RevesPuzzle {
    private static void hanoi(int n, String from, String temp1, String temp2, String to) {
        if (n <= 0) return;
        hanoi(n - 1, from, to, temp1, temp2);
        StdOut.println("Move disc " + n + " from " + from + " to " + to);
        hanoi(n - 1, temp2, from, temp1, to);
    }

    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        hanoi(n, "A", "B", "C", "D");
    }
}
