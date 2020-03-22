import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        int n, b, c = -1;
        for (int i = 0; i < t; i++) {
            String s = br.readLine();
            n = Integer.parseInt(s.substring(0, s.indexOf(' ')));
            b = Integer.parseInt(s.substring(s.indexOf(' ') + 1));
            int[] a = new int[n];
            s = br.readLine();
            s += "  ";
            while (c != n - 1) {
                a[++c] = Integer.parseInt(s.substring(0, s.indexOf(' ')));
                s = s.substring(s.indexOf(' ') + 1);
            }
            int j, k = 0, l;
            for (j = 0; j < a.length; j++) {
                for (l = j + 1; l < a.length; l++) {
                    if (a[l] < a[j]) {
                        a[j] = a[j] + a[l];
                        a[l] = a[j] - a[l];
                        a[j] = a[j] - a[l];
                    }
                }
            }
            for (j = 0; j < a.length; j++) {
                if (b - a[j] >= 0) {
                    k = k + 1;
                    b -= a[j];
                } else
                    break;
            }
            System.out.println("CASE #" + (i + 1) + ": " + k);
            k = 0;
            c = 0;
        }
    }
}
