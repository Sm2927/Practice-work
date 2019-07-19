//https://practice.geeksforgeeks.org/problems/logical-operators-java/1/?ref=self

//{
//Initial Template for Java
/*package whatever //do not write package name here */
import java.io.*;
import java.util.*;
//Position this line where user code will be pasted.
class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int testcases = sc.nextInt();
		
		while(testcases-- > 0){
		    boolean a = sc.nextBoolean();
		    boolean b = sc.nextBoolean();
		    
		    Geeks g = new Geeks();
		    g.logicOp(a, b);
		}
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks{
    
    static void logicOp(boolean a, boolean b){
       System.out.println((a&&b) + " " + (a||b) + " " + ((!a) && (!b)));
       
        /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/
    }
}
