//https://practice.geeksforgeeks.org/problems/the-pattern-matcher-java/1/?ref=self

{
//Initial Template for Java
import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
    	 Scanner sc = new Scanner(System.in);
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	   String s=sc.next();
    	   Geeks obj=new Geeks();
    	   obj.follPatt(s);
    	   
    	 }
    }
}
//Position this line where user code will be pasted.

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks{
    
    static void follPatt(String s)
    {
        
        //Your code here
        Stack<Character> st= new Stack<Character>();
        int res=1;
        char ch;
        int ss = s.length();
        for(int i=0;i<ss;i++){
            ch = s.charAt(i);
            if(ch == 'x'){st.push(ch);}
            else if(ch == 'y'){
                if( !st.isEmpty()){
                st.pop();
                }
                else{res = 0;}
            }
            //
        }
       
      System.out.println((res != 0)&&(st.isEmpty())?1:0);
    }
}
