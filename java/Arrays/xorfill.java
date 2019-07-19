//https://practice.geeksforgeeks.org/problems/xoring-and-clearing-java/1/?ref=self

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
    	     int n=sc.nextInt();
    	     int arr[]=new int[n];
    	     for(int i=0;i<n;i++)
    	     arr[i]=sc.nextInt();
    	     
    	     
    	        Geeks obj=new Geeks();
            	obj.xor1ToN(arr,n);
        	    obj.printArr(arr,n);
        	    obj.setToZero(arr,n);
        	    obj.printArr(arr,n);
    	   
    	 }
    }
}
//Position this line where user code will be pasted.

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks{
    
    static void printArr(int arr[],int n)
    {
        //Your code for printing arr here
        for(int e: arr){
        System.out.print(e + " ");}
        System.out.println();
    }
    
   static void setToZero(int arr[],int n)
    {
        //use Arrays.fill to set arr to zero
        Arrays.fill(arr,0);
    }
    
   static void xor1ToN(int arr[], int n)
    {
        
        
           //Xor arr[i]^i
           //int i=0;
           for(int i=0;i<n;i++){
              arr[i] ^= i;
        }
           
        
    }
}
