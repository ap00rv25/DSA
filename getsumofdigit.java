import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static int getsum(int n)
    {
        if(n==0)
        {
            return 0;
        }
        return getsum(n/10)+n%10;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    System.out.print(getsum(n));
	}
}
