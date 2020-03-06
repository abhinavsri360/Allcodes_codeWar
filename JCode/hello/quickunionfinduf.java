public class quickunionfinduf {
    private int[] id;
    private int[] sz;

    public quickunionfinduf(int N) {
        id = new int[N];
        sz = new int[N];
        for (int i = 0; i < N; i++) {
            id[i] = i;
            sz[i] = i;
        }
    }

    private int root(int i) {
        while (i != id[i]) {
            id[i] = id[id[i]];
            i = id[i];
        }
        return i;
    }

    public boolean connected(int p, int q) {
        return root(p) == root(q);
    }

    public void union(int p, int q) {
        int i = root(p);
        int j = root(q);
        if (i == j) return;
        if (sz[i] < sz[j]) {
            id[i] = j;
            sz[j] += sz[i];
        } else {
            id[j] = i;
            sz[i] += sz[j];
        }
    }

    public static void main(String[] args) {
        quickunionfinduf q = new quickunionfinduf(10);
        q.union(0, 1);
        q.union(1, 6);
        q.union(6, 7);
        q.union(7, 2);
        q.union(2, 3);
        q.union(3, 8);
        System.out.println(q.connected(4, 8));
    }
}
