public class unionfinduf {
    private int[] id;

    public unionfinduf(int N) {
        id = new int[N];
        for (int i = 0; i < N; i++) {
            id[i] = i;
        }
    }

    public boolean connected(int p, int q) {
        return id[p] == id[q];
    }

    public void union(int p, int q) {
        int pid = id[p];
        int qid = id[q];
        for (int i = 0; i < id.length; i++) {
            if (id[i] == pid)
                id[i] = qid;
        }
    }

    public static void main(String[] args) {
        unionfinduf u = new unionfinduf(9);
        u.union(0, 1);
        u.union(1, 6);
        u.union(6, 7);
        u.union(7, 2);
        u.union(2, 3);
        u.union(3, 8);
        System.out.println(u.connected(4, 8));
    }

}


