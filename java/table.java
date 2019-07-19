//https://practice.geeksforgeeks.org/problems/while-loop-printtable-java/1/?ref=self

{
//Initial Template for Java
//Initial Template for C++
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
		    obj.printTable(n);
		}
	
		
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks {
	 static void printTable (int n) 
	 {
            int multiplier=10;
            while(multiplier>0)
            {
                //Your code here
                System.out.print(((multiplier--)*n) + " ");
                
            }
       System.out.println();
	 }
}
