import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Roman {
    public int roman(String s) {
        int l = s.length(), sum = 0;
        for (int i = 0; i < l; i++) {
            if (i != l - 1 && s.charAt(i) == 'I' && s.charAt(i + 1) == 'V') {
                sum = sum + 4;
                i++;
            } else if (i != l - 1 && s.charAt(i) == 'I' && s.charAt(i + 1) == 'X') {
                sum = sum + 9;
                i++;
            } else if (i != l - 1 && s.charAt(i) == 'X' && s.charAt(i + 1) == 'L') {
                sum = sum + 40;
                i++;
            } else if (i != l - 1 && s.charAt(i) == 'X' && s.charAt(i + 1) == 'C') {
                sum = sum + 90;
                i++;
            } else if (i != l - 1 && s.charAt(i) == 'C' && s.charAt(i + 1) == 'D') {
                sum = sum + 400;
                i++;
            } else if (i != l - 1 && s.charAt(i) == 'C' && s.charAt(i + 1) == 'M') {
                sum = sum + 900;
                i++;
            } else {
                switch (s.charAt(i)) {
                    case 'I': {
                        sum = sum + 1;
                        break;
                    }
                    case 'V': {
                        sum = sum + 5;
                        break;
                    }
                    case 'X': {
                        sum = sum + 10;
                        break;
                    }
                    case 'L': {
                        sum = sum + 50;
                        break;
                    }
                    case 'C': {
                        sum = sum + 100;
                        break;
                    }
                    case 'D': {
                        sum = sum + 500;
                        break;
                    }
                    case 'M': {
                        sum = sum + 1000;
                        break;
                    }
                    default:
                        break;
                }//end of switch
            }
        }//end of for
        return sum;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s;
        int f;
        System.out.print("Enter a string:");
        s = br.readLine();
        Roman h = new Roman();
        f = h.roman(s);
        System.out.println(f);
    }
}
