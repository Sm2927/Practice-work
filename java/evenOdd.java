// https://practice.geeksforgeeks.org/problems/even-odd-java/1/?ref=self

{
//Initial Template for Java
import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		
		while(t-->0)
		{
    		int a = sc.nextInt();
    		int b = sc.nextInt();
    		Geeks obj=new Geeks();
    		obj.evenOdd(a,b);
		}
		
	
		
	}
}
//Position this line where user code will be pasted.

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
// Function to check if number is even or odd
class Geeks {
    // 
	 static void evenOdd (int a,int b) 
	 {
		//Your code here
		if(((a&1) == 0) && ((b&1) == 1)){
		    System.out.printf("%d\n%d\n",a,b);
		    
		}
		else if(((a&1) == 1) && ((b&1)== 0)){
		    System.out.printf("%d\n%d\n",b,a);
		}
	     
	 }
}
