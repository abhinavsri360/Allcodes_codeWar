import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class processastring {

    public static int sum(String s) {
        int t = 0;
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i)))
                t += (int) s.charAt(i) - 48;
        }
        return t;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        String s;
        t = Integer.parseInt(br.readLine());
        while (t-- != 0) {
            s = br.readLine();
            System.out.println(sum(s));
        }
    }
}
