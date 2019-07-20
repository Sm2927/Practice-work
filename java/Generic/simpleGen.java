//https://practice.geeksforgeeks.org/problems/java-generic-class/1

{
//Initial Template for Java
// Java program to illustrate
// Generics
import java.io.*;
import java.util.Scanner;
class gfg
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
        int n=sc.nextInt();
        if(n==1)
        {
            String s=sc.next();
            GenericClass<String> Str=new GenericClass<String>(s);
            Str.showType();
        }
        else
        {
            Integer p=sc.nextInt();
            GenericClass<Integer> integer=new GenericClass<Integer>(p);
            integer.showType();
        }
        }
    }
}
//Position this line where user code will be pasted.

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
public class GenericClass<T> {
    
    //Add your code here. Make a private data variable, constructor which intialize 
    // the data variable and a method showType().
    private T t;
    GenericClass(T t){
        this.t = t;
    }
    public void showType(){
        System.out.println(t.getClass().getSimpleName());
        //or System.out.println(t.getClass().getName().substring(10));
        System.out.println(t);
    }
}
