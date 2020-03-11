public class ThueMorse {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int x = 0, c = 1;
        int[] a;
        while (Math.pow(2, x) <= n) {
            x++;
        }
        a = new int[(int) Math.pow(2, x)];
        a[0] = 0;
        for (int i = 1; i < a.length; i = i * 2) {
            for (int k = 0; k < i; k++) {
                if (a[k] == 0) {
                    a[c] = 1;
                    c++;
                } else {
                    a[c] = 0;
                    c++;
                }
            }
            if (c == a.length)
                break;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] == a[j])
                    System.out.print("+  ");
                else
                    System.out.print("-  ");
            }
            System.out.println();
        }
    }
}
