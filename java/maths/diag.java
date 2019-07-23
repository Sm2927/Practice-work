//https://practice.geeksforgeeks.org/problems/print-diagonally/0/?ref=self

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
		    int i,j,k,lim;
		    n= sc.nextInt();
		    int[][] a = new int[n][n];
		    for(int x=0;x<n;x++){
		        for(int y=0;y<n;y++){
		            a[x][y] = sc.nextInt();
		        }
		        
		    }
		    
		    lim = (n*2) - 2;
		    //System.out.println("lim : "+lim);
		    k=0;
		    while(k<=lim){
		      // System.out.println("k: "+ k);
		      for(i=0;i<n;i++){
		          for(j=0;j<n;j++){
		              if((i+j)==k){
		              System.out.print(a[i][j]+" ");
		              break;
		          }
		          
		          }
		          
		      }
		      k++;
		    }
		    t--;System.out.println();
		}
	}
}
