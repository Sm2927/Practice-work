
//https://practice.geeksforgeeks.org/problems/for-loop-primecheck-java/1/?ref=self

{
//Initial Template for Java
//Initial Template for C++
/*package whatever //do not write package name here */
import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int n =sc.nextInt();
		    Geeks obj=new Geeks();
		    obj.isPrime(n);
		}
	
		
	}
}
//Position this line where user code will be pasted.

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
//Back-end complete function Template for Java
class Geeks {
	 static void isPrime (int n) 
	 {
	     if(n<2){
	         System.out.println("No");
	         return;
	     }
	     int sq = (int)Math.sqrt(n);
	     int i;
            for(i=2;i <= sq;i++)
            {
                //Your code here
                if(n%i == 0){
                    break;
                }
            }
        if(i<=sq){   
        System.out.println("No");
        }
        else{
          System.out.println("Yes");  
        }
	 }
}
