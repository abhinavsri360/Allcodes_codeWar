import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class test {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int i;
        System.out.print("Enter i:");
        i = Integer.parseInt(br.readLine());
        System.out.println(i);
    }
}
