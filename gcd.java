import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static int gcd(int a, int b)
    {
        while(a!=b)
        {
            if(a>b)
            {
                a=a-b;
            }
        else
            {
                b=b-a;
            }
        }
        return a;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int a = sc.nextInt();
	    int b = sc.nextInt();
	    System.out.print(gcd(a,b));
	}
}
 