import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Hello {
    public boolean isValid(String s) {
        String a, b;
        int l = s.length();
        while (l != 0) {

        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s;
        System.out.print("Enter:");
        s = br.readLine();
        boolean f;
        Hello h = new Hello();
        f = h.isValid(s);
        System.out.println(f);
    }
}
