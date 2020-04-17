package mooc.vandy.java4android.diamonds.logic;

import android.util.Log;
import mooc.vandy.java4android.diamonds.ui.OutputInterface;

/**
 * This is where the logic of this App is centralized for this assignment.
 * <p>
 * The assignments are designed this way to simplify your early
 * Android interactions.  Designing the assignments this way allows
 * you to first learn key 'Java' features without having to beforehand
 * learn the complexities of Android.
 */
public class Logic
       implements LogicInterface {
    /**
     * This is a String to be used in Logging (if/when you decide you
     * need it for debugging).
     */
    public static final String TAG = Logic.class.getName();

    /**
     * This is the variable that stores our OutputInterface instance.
     * <p>
     * This is how we will interact with the User Interface [MainActivity.java].
     * <p>
     * It is called 'out' because it is where we 'out-put' our
     * results. (It is also the 'in-put' from where we get values
     * from, but it only needs 1 name, and 'out' is good enough).
     */
    private OutputInterface mOut;

    /**
     * This is the constructor of this class.
     * <p>
     * It assigns the passed in [MainActivity] instance (which
     * implements [OutputInterface]) to 'out'.
     */
    public Logic(OutputInterface out){
        mOut = out;
    }

    /**
     * This is the method that will (eventually) get called when the
     * on-screen button labeled 'Process...' is pressed.
     */
    public void process(int n) {

        // TODO -- add your code here
        int a=4+(n-1)*2;
        int b=2*n-1;
        int size=n-1;
        int dash=0;
        for(int i=0;i<a;i++)
        {
            if(i==0 || i==a-1)
                mOut.print("+");
            else
                mOut.print("-");
        }
        mOut.println();

        for(int i=0;i<b/2+1;i++)
        {
            mOut.print("|");
            for(int j=0;j<size;j++)
                mOut.print(" ");

            if(i==n-1 && i%2==0)
            {
                mOut.print("<");
                for(int k=0;k<(n-1)*2;k++)
                    mOut.print("=");
                mOut.print(">");
            }
            else if(i==n-1 && i%2!=0)
            {
                mOut.print("<");
                for(int k=0;k<(n-1)*2;k++)
                    mOut.print("-");
                mOut.print(">");
            }
            else if(i%2==0)
            {
                mOut.print("/");
                for(int k=0;k<dash;k++)
                    mOut.print("=");
                mOut.print("\\");
            }
            else if(i%2!=0)
            {
                mOut.print("/");
                for(int k=0;k<dash;k++)
                    mOut.print("-");
                mOut.print("\\");
            }

            for(int j=0;j<size;j++)
                mOut.print(" ");

            mOut.print("|");

            mOut.println();
            dash+=2;
            size--;
        }
        dash-=4;
        size+=2;


        for(int i=0;i<b/2;i++)
        {
            mOut.print("|");
            for(int j=0;j<size;j++)
                mOut.print(" ");

            if(i==n-1 && i%2==0)
            {
                mOut.print("<");
                for(int k=0;k<(n-1)*2;k++)
                    mOut.print("=");
                mOut.print(">");
            }
            else if(n==n-1 && i%2!=0)
            {
                mOut.print("<");
                for(int k=0;k<(n-1)*2;k++)
                    mOut.print("-");
                mOut.print(">");
            }
            else if(i%2==0)
            {
                mOut.print("\\");
                for(int k=0;k<dash;k++)
                    mOut.print("=");
                mOut.print("/");
            }
            else if(i%2!=0)
            {
                mOut.print("\\");
                for(int k=0;k<dash;k++)
                    mOut.print("-");
                mOut.print("/");
            }

            for(int j=0;j<size;j++)
                mOut.print(" ");

            mOut.print("|");

            mOut.println();
            dash-=2;
            size++;
        }

        for(int i=0;i<a;i++)
        {
            if(i==0 || i==a-1)
                mOut.print("+");
            else
                mOut.print("-");
        }

    }


}
