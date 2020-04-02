import java.io.Arrays;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class lapindrome {

    public static String odd(String w) {
        char[] a = new char[w.length() / 2];
        String b = w.substring(w.length() / 2 + 1, w.length());
        char[] c = new char[b.length()];
        Arrays.sort(a);
        Arrays.sort(c);
        for (int i = 0; i < b.length(); i++) {
            if (a[i] != c[i])
                return "NO";
        }
        return "YES";
    }

    public static String eve(String w) {
        char[] a = new char[w.length() / 2];
        String b = w.substring(w.length() / 2, w.length());
        char[] c = new char[b.length()];
        Arrays.sort(a);
        Arrays.sort(c);
        for (int i = 0; i < b.length(); i++) {
            if (a[i] != c[i])
                return "NO";
        }
        return "YES";
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        String w;
        while (t-- != 0) {
            w = br.readLine();
            if (w.length() % 2 != 0)
                System.out.println(odd(w));
            else
                System.out.println(eve(w));
        }
    }
}
