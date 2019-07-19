
//https://practice.geeksforgeeks.org/problems/consonants-and-vowels-check-java/1/?ref=self

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
    	 sc.nextLine();
    	 boolean flag = false;
    	 while(t-- > 0){
    	  String s=sc.nextLine();
    	  Geeks obj=new Geeks();
    	  obj.checkString(s);
    	   
    	 }
    }
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks{
    
    static void checkString(String s)
    {
        int v=0;
        int c=0;
        
        //Your code here
        Character[] vow1 = {'a','A','e','E','i','I','o','O','u','U'};
        ArrayList<Character> vow = new ArrayList<Character>();
        vow.addAll(Arrays.asList(vow1));
       // System.out.print(vow);
        int st = s.length();
            for(int i = 0;i<st;i++){
                if(vow.contains(new Character(s.charAt(i)))){v++;}
                else{
                    if(s.charAt(i) != ' '){c++;}}
            }
       // System.out.print(c+" "+v);
        if(v>c)
        System.out.print("Yes");
        else if(c>v)
        System.out.print("No");
        else
       System.out.print("Same");
        
        System.out.println();
    }
}
