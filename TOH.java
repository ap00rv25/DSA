import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static void toh(int n, char A , char B, char C)
    {
        if(n==1)
        {
            System.out.print(" Move 1 from "+A+" to "+C);
            return;
        }
        toh(n-1,A,B,C);
        System.out.print(" Move "+n+" from "+A+" to "+C);
        toh(n-1,B,A,C);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    toh(n, 'A', 'B', 'C');
	}
}
