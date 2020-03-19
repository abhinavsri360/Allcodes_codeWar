import java.io.File;

public class Huntingtons {
    public static void main(String[] args) {
        String s = args[0];
        File file = new File(s);
        In b = new In(file.getAbsolutePath());
        s = b.readAll();
        int d = maxRepeats(s);
        System.out.println("max repeats = " + d);
        System.out.println(diaganose(d));
    }

    public static String diaganose(int maxRepeats) {
        if (maxRepeats < 10 || maxRepeats > 180)
            return "not human";
        else if (maxRepeats < 40)
            return "no Huntigton's";
        else
            return "Huntigton's";
    }

    public static String removeWhitespace(String s) {
        return s.replaceAll(" ", "").replaceAll("\n", "").replaceAll("\r", "").replaceAll("\t", "");
    }

    public static int maxRepeats(String dna) {
        String s = removeWhitespace(dna);
        int c = 0, max = 0;
        for (int i = 0; i < s.length() - 3; i++) {
            while (s.charAt(i + 3) != 'T') {
                if (s.substring(i, i + 3).equals("CAG")) {
                    c++;
                    i += 3;
                } else
                    break;
            }
            if (++c > max)
                max = c;
            c = 0;
            i += 3;
        }
        return max;
    }
}
