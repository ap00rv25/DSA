import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static int fact(int n, int k)
    {
        if(n==0 || n==1)
        {
            return k;
        }
        return fact(n-1, k*n);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
            int k = 1;
	    System.out.print(fact(n,k));
	}
}
