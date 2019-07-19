//https://practice.geeksforgeeks.org/problems/predict-the-column-java/1/?ref=self

{
//Initial Template for Java
import java.io.*;
import java.util.*;
//Position this line where user code will be pasted.
// Driver class
class GFG {
    
    // Driver code
	public static void main (String[] args) {
	    // Taking input using scanner class
		Scanner sc = new Scanner(System.in);
		
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    int n = sc.nextInt();
		    int a[][] = new int[n][n];
		    
		    for(int i = 0;i<n;i++){
		        for(int j = 0;j<n;j++){
		            a[i][j] = sc.nextInt();
		        }
		    }
		    
		    Geeks obj = new Geeks();
		    System.out.println(obj.columnWithMaxZero(a, n));
		}
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
/*Class Geeks with its member function columnWithMaxZero()
* a[][] = matrix input
* n : number of rows and columns each
*/
class Geeks{
    
    static int columnWithMaxZero(int a[][],int n){
        
        // Your code here
        int c,p,i,j;
        p=-1;
        //HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
       c = Integer.MAX_VALUE;;
       int sumc;
        for(j=0;j<n;j++){
            sumc = 0;
            for(i = 0;i<n;i++){
               sumc += a[i][j];
            }
            if(sumc < c){
                p = j;
                c = sumc;
            }
            
        }
       
        return p;
        
    }
}
