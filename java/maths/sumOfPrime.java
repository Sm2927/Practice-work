//https://practice.geeksforgeeks.org/problems/sum-of-prime/0/?ref=self

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static boolean isPrime(int n){
        if(n<2){
            return false;
        }
        for(int i=2;i<=(n/2);i++){
            if((n%i) == 0){return false;}
        }
        return true;
    }
	public static void main (String[] args) {
// 		//code
		int t,n,i;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t>0){
		    n= sc.nextInt();
		    for(i = n;i>=(n/2);i--){
		        if(isPrime(i) && isPrime(n-i)){
		          //  System.out.println(t+" "+n);

		            System.out.println(n-i+" "+i);
		            break;
		        }
		    }
		    if(i< (n/2)){
		       System.out.println(-1); 
		    }
            t--;
		}
		sc.close();
	}
}
