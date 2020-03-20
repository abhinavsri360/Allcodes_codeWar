import java.io.File;

public class Huntingtons {
    public static void main(String[] args) {
        String s = args[0];
        File file = new File(s);
        In b = new In("./" + file);
        s = b.readAll();
        int d = maxRepeats(removeWhitespace(s));
        System.out.println("max repeats = " + d);
        System.out.println(diagnose(d));
    }

    public static String diagnose(int maxRepeats) {
        if (maxRepeats < 10 || maxRepeats > 180)
            return "not human";
        else if (maxRepeats < 36)
            return "normal";
        else if (maxRepeats < 40)
            return "high risk";
        else
            return "Huntington's";
    }

    public static String removeWhitespace(String s) {
        return s.replaceAll(" ", "").replaceAll("\n", "").replaceAll("\r", "").replaceAll("\t", "");
    }

    public static int maxRepeats(String dna) {
        int c = 0, max = 0, j;
        for (int i = 0; i < dna.length() - 3; i++) {
            j = i;
            while (dna.charAt(j + 3) != 'T' || dna.substring(j, j + 3).equals("CAG")) {
                if (dna.substring(j, j + 3).equals("CAG")) {
                    c++;
                    j += 3;
                    if (j > dna.length() - 4 && dna.substring(j, j + 3).equals("CAG")) {
                        c++;
                        break;
                    }
                } else
                    break;
            }
            if (c > max)
                max = c;
            c = 0;
        }
        return max;
    }
}
