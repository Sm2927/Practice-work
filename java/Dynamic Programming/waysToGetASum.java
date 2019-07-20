//https://practice.geeksforgeeks.org/problems/reach-a-given-score/0

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		int t,n;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		
		while(t>0){
		    n = sc.nextInt();
		    int[] dp = new int[n+1];
		    dp[0] = 1;
		    for(int i=3;i<=n;i++){
		        dp[i] += dp[i-3];
		    }
		    for(int i=5;i<=n;i++){
		        dp[i] += dp[i-5];
		    }
		    for(int i=10;i<=n;i++){
		        dp[i] += dp[i-10];
		    }
		    
		    System.out.println(dp[n]);
		    
		    t--;
		}
	}
}
