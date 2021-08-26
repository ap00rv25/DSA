import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static void printnto1(int n)
    {
        if(n==0)
        {
            return;
        }
        System.out.print(n + " ");
        printnto1(n-1);
    }
    static void print1ton(int n)
    {
        if(n==0)
        {
            return;
        }
        print1ton(n-1);
        System.out.print(n + " ");
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printnto1(n);
        print1ton(n);
	}
}
