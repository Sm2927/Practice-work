//https://practice.geeksforgeeks.org/problems/almost-equal-java/1/?ref=self

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
    	   String s1=sc.next();
    	   String s2=sc.next();
    	   Geeks obj=new Geeks();
    	   System.out.println(obj.coutChars(s1,s2));
    	   
    	 }
    }
}
//Position this line where user code will be pasted.

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Geeks{
    
    static int coutChars(String s1, String s2)
    {
        
       //Your code here
       HashMap<Character, Integer> hm = new HashMap<Character, Integer>();
       int n1,n2,c;
       char ch;
       n1 = s1.length();
       n2 = s2.length();
       for(int i=0;i<n1;i++){
           ch= s1.charAt(i);
           if(hm.containsKey(ch)){
               c = (int)hm.get(ch);
               c++;
               hm.put(ch,c);
           }
           else{
               hm.put(ch,1);
           }
       }
       
       
       
       for(int i=0;i<n2;i++){
           ch= s2.charAt(i);
           if(hm.containsKey(ch)){
               c = (int)hm.get(ch);
               c--;
               hm.put(ch,c);
           }
           else{
               hm.put(ch,-1);
           }
       }
       int sum=0;
       for(Map.Entry m : hm.entrySet()){
        //   System.out.println(m.getKey() + " " + m.getValue());
           sum += Math.abs((int)m.getValue());
       }
       
       
      return sum; 
       
    }
