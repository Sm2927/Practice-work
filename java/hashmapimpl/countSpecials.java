
//https://practice.geeksforgeeks.org/problems/count-the-specials-java/1/?ref=self

{
//Initial Template for Java
import java.io.*;
import java.util.*;
import java.lang.*;
//Position this line where user code will be pasted.
// Driver class
class GFG {
	public static void main (String[] args) {
	    
	    // Taking input through Scanner class
		Scanner sc = new Scanner(System.in);
		
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    int sizeof_array = sc.nextInt();
		    int k = sc.nextInt();
		    
		    int a[] = new int[sizeof_array];
		    
		    for(int i = 0;i<sizeof_array;i++){
		        a[i] = sc.nextInt();
		    }
		    
		    Geeks obj = new Geeks();
		    obj.countSpecials(a, sizeof_array, k);
		}
		
	}
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
/*Class Geeks with countSpecials as its member function
* a : input array
* n : size of array
k : to calculate floor(n/k)
*/
class Geeks{
    static void countSpecials(int a[], int n, int k){
        int f = (int)Math.floor(n/k);
        int c, cnt = 0;
        // your code here
        HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();
        for(int e : a){
            if(hm.containsKey(e)){
                c = hm.get(e);
                c++;
                hm.put(e,c);
            }
            else{
                hm.put(e,1);
            }
        }
        for(Map.Entry m : hm.entrySet()){
            if((int)m.getValue() == f) { cnt++;}
        }
        System.out.println(cnt);
        
    }
