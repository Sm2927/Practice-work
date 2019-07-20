
//https://practice.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1

{

import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.*;
class Node
{
    int data;
    Node next;
    
    Node(int key)
    {
        data = key;
        next = null;
    }
}
class count_pairs
{
   
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n1 = sc.nextInt();
            Integer arr1[] = new Integer[n1];
             
             for(int i = 0; i < n1; i++)
                 arr1[i] = sc.nextInt();
            
            int n2 = sc.nextInt();
            Integer arr2[] = new Integer[n2];
            
            for(int i = 0; i < n2; i++)
                arr2[i] = sc.nextInt();
                
            LinkedList<Integer> head1 = new LinkedList<>(Arrays.asList(arr1));
            LinkedList<Integer> head2 = new LinkedList<>(Arrays.asList(arr2));
            
            int x = sc.nextInt();
            GfG gfg = new GfG();
            System.out.println(gfg.countPairs(head1, head2, x));
        }
    }
}
}
/*This is a function problem.You only need to complete the function given below*/

// your task is to complete this function 
class GfG
{
  
   
    public static int countPairs(LinkedList<Integer> head1, LinkedList<Integer> head2, int x)
    {
        // add your code here
        int cnt = 0;
        int s1 = head1.size();
        int s2 = head2.size();
        x = Integer.valueOf(x);
        HashSet<Integer> hs = new HashSet<Integer>();
       for(Integer e : head1){
           hs.add(x-e);
       }
       for(Integer e : head2){
           if(hs.contains(e)){cnt++;}
       }
        return cnt;
        
    }
}
