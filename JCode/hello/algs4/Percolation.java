import edu.princeton.cs.algs4.WeightedQuickUnionUF;

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
        if (a[row][col] == 1)
            return true;
        else
            return false;
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

    public boolean percolates() {
        int row = 0;
        int n = a.length;
        for (int i = 0; i < n; i++) {
            if (a[row][i] == 2) {
                while (row != n - 1) {
                    if (row + 1 != n && a[row + 1][i] == 2)
                        row++;
                    else if (row + 1 != n && i + 1 != n && a[row][i + 1] == 2)
                        i++;
                    else if (row - 1 != -1 && a[row - 1][i] == 2)
                        row--;
                    else if (i - 1 != -1 && a[row][i - 1] == 2)
                        i--;
                    else
                        break;
                }
                if (row == n - 1)
                    break;
            }
        }
        if (row == n - 1)
            return true;
        else
            return false;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter size of matrix:");
        int n = Integer.parseInt(br.readLine());
        WeightedQuickUnionUF u = new WeightedQuickUnionUF(n);
        Percolation p = new Percolation(n);
    }
}
