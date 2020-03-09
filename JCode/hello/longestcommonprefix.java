import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class longestcommonprefix {
    public String longestCommonPrefix(String[] strs) {
        if (strs.length == 0)
            return "";
        int minLen = Integer.MAX_VALUE;
        for (int i = 0; i < strs.length; i++) {
            int len = strs[i].length();
            minLen = Math.min(minLen, len);
        }

        for (int i = 0; i < minLen; i++) {
            char ch = strs[0].charAt(i);
            boolean res = true;
            for (int j = 1; j < strs.length; j++) {
                if (ch != strs[j].charAt(i)) {
                    res = false;
                    break;
                }
            }
            if (!res) {
                return strs[0].substring(0, i);
            }
        }
        return strs[0].substring(0, minLen);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n;
        System.out.print("Enter number of names:");
        n = Integer.parseInt(br.readLine());
        String[] s = new String[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter a name:");
            s[i] = br.readLine();
        }
        String f;
        longestcommonprefix h = new longestcommonprefix();
        f = h.longestCommonPrefix(s);
        System.out.println(f);
    }
}
