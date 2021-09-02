import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    static int jos(int n, int k){
        if(n==1){
            return 0;
        }
        else{
            return (jos(n-1,k)+k)%n;
        }
        
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		System.out.print(jos(n,k)+1);
	}
}
