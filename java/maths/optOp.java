//https://practice.geeksforgeeks.org/problems/find-optimum-operation/0/?ref=self

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
		  //  int i,j,k,lim;
		    n= sc.nextInt();
		    int[] a = new int[n+1];
		    a[1] = 1;
		    a[2] = 2;
		    for(int i=3;i<=n;i++){
		        if(i%2 == 0){
		            a[i] = Math.min(i, a[i/2]+1);
		        }
		        else{
		            a[i] = Math.min(i,a[i-1]+1);
		        }
		    }
		    System.out.println(a[n]);
		    t--;
		}
	}
}
