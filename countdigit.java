import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static int countdigit(int n)
    {
        if(n==0)
        {
            return 0; 
        }
        return 1+countdigit(n/10);
    }
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.print("Number of Digits: "+ countdigit(n));
	}
}
