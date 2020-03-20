public class generateRandom {
    public static void main(String[] args) {
        char c = 'n';
        String h;
        while (c != 'y') {
            System.out.print(4 * Math.random());
            c = StdIn.readChar();
            System.out.println();
        }
    }
}
