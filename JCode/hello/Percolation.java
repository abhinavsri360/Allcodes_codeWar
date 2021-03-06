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
        Percolation p = new Percolation(20);//Send size of grid from here
        if (p.percolates() == true)
            System.out.println("System Percolates");
        else if (p.percolates() == false)
            System.out.println("System does not percolate");
    }
}
