import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static int fact(int n)
    {
        if(n==0)
        {
            return 1;
        }
        return n*fact(n-1);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    System.out.print(fact(n));
	}
}
