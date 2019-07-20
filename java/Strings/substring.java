//https://practice.geeksforgeeks.org/problems/java-substring/0

/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		int t,l,r;
		String s;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t!=0){
		    s = sc.next();
		    l = sc.nextInt();
		    r = sc.nextInt();
		    System.out.println(s.substring(l,r+1));
		    t--;
		}
	}
}
