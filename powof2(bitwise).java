import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
    static boolean ispow2(int n)
    {
        if(n==0){
            return false;
        }
        return ((n & (n-1))==0);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		System.out.print(ispow2(n));
	}
}
