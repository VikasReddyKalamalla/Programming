package DSA.BitManipulation;

//package bitmanipulation;

import java.util.Scanner;

public class Day1bitmanipulation {
	
	static String decimaltobinary(int n)
	{
		String b ="";
		while(n>=1) {
			int x = n%2;
			n = n/2;
			b=x+b;
		}
		return b;
	}
	
	static int  binarytodecimal(String b)
	{
		int result = 0;
		int powof2 = 1;
		
		for(int i = b.length()-1;i>=0;i--)
		{
			if(b.charAt(i) == '1')
			{
				result = result+powof2;
			}
			powof2 = powof2 * 2;
		}
		return result;
				
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Scanner scan = new Scanner(System.in);
			System.out.println("Enter the n value : ");
			int n =scan.nextInt();
			String b = decimaltobinary(n);
			System.out.println(b);
			System.out.println(binarytodecimal(b));
			
	}

}