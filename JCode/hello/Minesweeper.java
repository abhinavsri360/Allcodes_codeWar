public class Minesweeper {
    public static void main(String[] args) {

        int m = Integer.parseInt(args[0]);
        int n = Integer.parseInt(args[1]);
        int k = Integer.parseInt(args[2]);


        boolean[][] mines = new boolean[m + 2][n + 2];
        int[][] s = new int[m + 2][n + 2];
        int[] r = new int[k];
        int[] c = new int[k];


        for (int i = 0; i < k; i++) {
            r[i] = (int) (Math.random() * (m + 2));
            c[i] = (int) (Math.random() * (n + 2));
            if (mines[r[i]][c[i]] != true && r[i] != 0 && c[i] != 0 && r[i] != (m + 1) && c[i] != (n + 1))
                mines[r[i]][c[i]] = true;
            else
                i--;
        }

        int o = 0;
        for (int i = 1; i < m + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (mines[i][j] == true) {
                    o = -1;
                } else {
                    if (mines[i + 1][j] == true)
                        o++;
                    if (mines[i - 1][j] == true)
                        o++;
                    if (mines[i][j + 1] == true)
                        o++;
                    if (mines[i][j - 1] == true)
                        o++;
                    if (mines[i + 1][j + 1] == true)
                        o++;
                    if (mines[i - 1][j - 1] == true)
                        o++;
                    if (mines[i + 1][j - 1] == true)
                        o++;
                    if (mines[i - 1][j + 1] == true)
                        o++;
                }
                s[i][j] = o;
                o = 0;
            }
        }

        for (int i = 1; i < m + 1; i++) {
            for (int j = 1; j < n + 1; j++) {
                if (s[i][j] == -1)
                    System.out.print("*  ");
                else
                    System.out.print(s[i][j] + "  ");
            }
            System.out.println();
        }
    }
}
