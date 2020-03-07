import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class assigna3 {
    private int[] a;

    public assigna3(int n) {
        a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = 0;
        }
    }

    public void remove(int n) {
        if (n >= a.length)
            System.out.println("Element not in present one's");
        else {
            if (n + 1 < a.length && a[n + 1] == 1)
                a[n] = n + 1;
            else if (n + 1 < a.length && a[n + 1] != 0)
                a[n] = a[n + 1];
            a[n] = 1;
        }
    }

    public void find(int n) {
        boolean flag = true;
        if (n >= a.length)
            System.out.println("Element not in present one's");
        else
            while (flag) {
                if (a[n] == 0)
                    break;
                else if (a[n] != 0 && a[n] != 1) {
                    n = a[n];
                    break;
                } else
                    n++;
                if (n == a.length) {
                    System.out.println("No such element present.");
                    return;
                }
            }
        System.out.println("Element found:" + n);
    }


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n;
        System.out.print("Enter the value of n:");
        n = Integer.parseInt(br.readLine());
        assigna3 a = new assigna3(n);
        char b;
        String c;
        do {
            System.out.print("Enter element to be removed:");
            n = Integer.parseInt(br.readLine());
            a.remove(n);
            System.out.print("Do you want to delete more?:");
            b = (char) br.read();
            c = br.readLine();
        } while (b != 'n');

        do {
            System.out.print("Enter predecessor:");
            n = Integer.parseInt(br.readLine());
            a.find(n);
            System.out.print("Do you want to find more?:");
            b = (char) br.read();
            c = br.readLine();
        } while (b != 'n');
    }
}
