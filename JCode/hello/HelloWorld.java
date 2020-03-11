public class HelloWorld {
    public static void main(String[] args) {
        int[] a = new int[10];

        for (int i = 0; i < 10; i++)
            a[i] = 9 - i;

        for (int i = 0; i < 10; i++)
            a[i] = a[a[i]];

        System.out.println(a[5]);
    }
}
