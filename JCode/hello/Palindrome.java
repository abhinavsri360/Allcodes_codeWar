import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Palindrome {
    public boolean palindrome(int n) {
        int r = 0, c = n;
        while (c != 0) {
            r = r * 10 + c % 10;
            c = c / 10;
        }
        if (r == n && n >= 0)
            return true;
        else
            return false;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n;
        boolean f;
        n = Integer.parseInt(br.readLine());
        Palindrome h = new Palindrome();
        f = h.palindrome(n);
        System.out.println(f);
    }
}
