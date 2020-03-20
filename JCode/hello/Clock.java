public class Clock {
    private int hours;
    private int minutes;

    public Clock(int h, int m) {
        if (h < 0 || h > 23 || m < 0 || m > 59)
            throw new IllegalArgumentException("False Arguments");
        hours = h;
        minutes = m;
    }

    public Clock(String s) {
        if (s.length() < 5 || Integer.parseInt(s.substring(0, 2)) < 0 || Integer.parseInt(s.substring(0, 2)) > 23 || Integer.parseInt(s.substring(3, 5)) < 0 || Integer.parseInt(s.substring(3, 5)) > 59)
            throw new IllegalArgumentException("False Arguments");
        hours = Integer.parseInt(s.substring(0, 2));
        minutes = Integer.parseInt(s.substring(3, 5));
    }

    public String toString() {
        if (hours <= 9 && minutes <= 9)
            return "0" + hours + ":" + "0" + minutes;
        else if (hours <= 9)
            return "0" + hours + ":" + minutes;
        else if (minutes <= 9)
            return hours + ":" + "0" + minutes;
        else
            return hours + ":" + minutes;

    }

    public boolean isEarlierThan(Clock that) {
        if (hours < that.hours)
            return true;
        else if (hours == that.hours && minutes < that.minutes)
            return true;
        else if (hours > that.hours)
            return false;
        else
            return false;
    }

    public void tic() {
        if (hours == 23 && minutes == 59) {
            hours = 0;
            minutes = 0;
        } else if (minutes == 59) {
            hours++;
            minutes = 0;
        } else
            minutes++;
    }

    public void toc(int delta) {
        if (delta < 0)
            throw new IllegalArgumentException("False Arguments");
        while (delta >= 60) {
            delta -= 60;
            if (hours < 23)
                hours++;
            else
                hours = 0;
        }
        minutes += delta;
        if (minutes >= 60) {
            minutes -= 60;
            if (hours < 23)
                hours++;
            else
                hours = 0;
        }
    }

    public static void main(String[] args) {
        int h = Integer.parseInt(args[0]);
        int m = Integer.parseInt(args[1]);
        String t = args[2];
        Clock a = new Clock(h, m);
        Clock b = new Clock(t);
        System.out.println(a.isEarlierThan(b));
        a.tic();
        b.tic();
        a.toc(b.minutes);
        System.out.println(a.toString());
        System.out.println(b.toString());
    }
}
