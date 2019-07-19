//https://practice.geeksforgeeks.org/problems/need-some-change-java/1/?ref=self

{
//Initial Template for Java
import java.io.*;
import java.util.*;
//Position this line where user code will be pasted.
// Driver class
class GFG {
    
    // Driver code
	public static void main (String[] args) {
	    // Input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    int sizeof_array = sc.nextInt();
		    int a[] = new int[sizeof_array];
		    
		    for(int i = 0;i<sizeof_array;i++){
		        a[i] = sc.nextInt();
		    }
		    
		    Geeks obj = new Geeks();
		    obj.swapElements(a, sizeof_array);
		}
		
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
/*Geeks class with its member function swapElements
* a : array with input elements
* n : size of array
*/
class Geeks{
  
    static void swapElements(int a[], int n){
  int lim = (int)(n+1)/2;
        // System.out.print(lim+" ");
        for(int i=0;i<n-2;i++){
            //swapIt(new Integer(a[i]),new Integer(a[i+2]));
           
            a[i] ^= a[i+2];
            a[i+2] ^= a[i];
            a[i] ^= a[i+2];
            
        }
        
        for(int e: a){
            System.out.print(e+" ");
        }
        System.out.println("");
    }
}
