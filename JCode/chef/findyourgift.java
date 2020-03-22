import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class findyourgift {

    private int x;
    private int y;

    public findyourgift() {
        x = 0;
        y = 0;
    }

    public void moves(char s) {
        if (s == 'L')
            x--;
        else if (s == 'R')
            x++;
        else if (s == 'U')
            y++;
        else if (s == 'D')
            y--;
    }

    public String shorten(String s, int n) {
        String dash = "";
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) != s.charAt(i + 1))
                dash = dash + Character.toString(s.charAt(i));
            else
                continue;
        }
        dash += " ";
        for (int i = 0; i < dash.length(); i++) {
            if ((dash.charAt(i) == 'L' && dash.charAt(i + 1) == 'R') || (dash.charAt(i) == 'R' && dash.charAt(i + 1) == 'L'))
                moves(dash.charAt(i++));
            else if ((dash.charAt(i) == 'U' && dash.charAt(i + 1) == 'D') || (dash.charAt(i) == 'D' && dash.charAt(i + 1) == 'U'))
                moves(dash.charAt(i++));
            else if (i < 2)
                moves(dash.charAt(i));
            else if (dash.charAt(i - 2) != dash.charAt(i))
                moves(dash.charAt(i));
        }

        return dash;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n;
        String s;
        int t = Integer.parseInt(br.readLine());
        findyourgift g[] = new findyourgift[t + 1];

        while (t-- != 0) {
            n = Integer.parseInt(br.readLine());
            s = br.readLine();
            s = s.toUpperCase() + " ";

            g[t] = new findyourgift();

            s = g[t].shorten(s, n);
            System.out.println(g[t].x + " " + g[t].y);
        }
    }
}
