//https://practice.geeksforgeeks.org/problems/number-of-unique-paths/0/?ref=self

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		int t,n,m;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t>0){
		  //  int i,j,k,lim;
		    n= sc.nextInt();
		    m= sc.nextInt();  
		    int[][] a = new int[n][m];
		    for(int i=0;i<m;i++){
		        a[0][i] = 1; //places in first row can be
		        //reached in only 1 way
		    }
		    for(int i=0;i<n;i++){
		        a[i][0] = 1;
		        //places in first column can be
		        //reached in only 1 way
		    }
		  //  System.out.println("KKK");
		    for(int i=1;i<n;i++){
		        for(int j=1;j<m;j++){
		            a[i][j] = a[i-1][j]+a[i][j-1];
		  //          //can be reached in the sum of ways
		  //          //how the upper and left blocks
		  //          //can be reached
		        }
		    }
		    System.out.println(a[n-1][m-1]);
		    t--;
	}
}
}
