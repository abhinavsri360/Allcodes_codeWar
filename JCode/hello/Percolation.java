import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Percolation {
    private int[][] a;

    public Percolation(int n) {
        if (n <= 0)
            throw new IllegalArgumentException("Size of given area not valid.");
        a = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = 0;
            }
        }
    }

    public void open(int row, int col) {
        if (a[row][col] == 0)
            a[row][col] = 1;
    }

    public boolean isOpen(int row, int col) {
        if (a[row][col] == 0)
            return false;
        else
            return true;
    }

    public boolean isFull(int row, int col) {
        if (a[row][col] == 2)
            return true;
        else
            return false;
    }

    public int numberOfOpenSites() {
        int n = a.length;
        int c = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == 1)
                    c++;
            }
        }
        return c;
    }

    public void show(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n;
        n = Integer.parseInt(br.readLine());
        Percolation p = new Percolation(n);
        p.show(n);
    }
}
