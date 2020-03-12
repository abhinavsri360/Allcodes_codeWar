/* to run these type of codes:
Compilation: javac-introcs filename.java
Run: java-introcs filename

keep on entering digits and when done press ctrl+Z in order to exit;
 */

public class Helloavgstdin {
    public static void main(String[] args) {
        double sum = 0.0;
        int n = 0;
        while (!StdIn.isEmpty()) {
            double x = StdIn.readDouble();
            sum += x;
            n++;
        }
        StdOut.println(sum / n);
    }
}
