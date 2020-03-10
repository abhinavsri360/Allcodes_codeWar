import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Parantheises {
    public boolean isValid(String s) {
        HashMap<Character, Character> hmap = new HashMap<>();
        Stack stack = new Stack();
        hmap.put('[', ']');
        hmap.put('(', ')');
        hmap.put('{', '}');
        for (char c : s.toCharArray()) {
            if (c == '{' || c == '[' || c == '(') {
                stack.push(c);

            } else if (c == '}' || c == ']' || c == ')') {
                if (stack.isEmpty()) {
                    return false;
                } else if (hmap.get(stack.pop()) != c) {
                    return false;
                }

            }
        }
        return stack.isEmpty();
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s;
        System.out.print("Enter:");
        s = br.readLine();
        boolean f;
        Hello h = new Hello();
        f = h.isValid(s);
        System.out.println(f);
    }
}
