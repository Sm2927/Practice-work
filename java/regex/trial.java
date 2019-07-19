//https://www.programcreek.com/2013/10/top-10-questions-for-java-regular-expression/
//https://www.youtube.com/watch?v=juqhgW0SVb4
/*package whatever //do not write package name here */

import java.io.*;
import java.util.regex.*;
import java.text.*;

class GFG {
	public static void main (String[] args) {
	    int cnt = 0;
		Pattern p = Pattern.compile("(?x) (?:  a  (?= a* (\\1?+ b))  )+ \\1");
		Matcher m = p.matcher("aaaabbbbaabbaaaabbbb");
		while(m.find()){
		    System.out.println(m.start()+"   "+m.end());
		    cnt++;
		}
		System.out.println(cnt);
	}
}
