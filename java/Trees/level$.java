//https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1/?ref=self

{
// INITIAL CODE
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;
import java.util.HashMap;
import java.util.*;
import java.lang.*;
import java.io.*;
// A Binary Tree node
class Node
{
    int data;
    Node left, right;
    Node(int item)
    {
        data = item;
        left = right = null;
    }
}
class Drivercode
{
	
	
    // driver function to test the above functions
    public static void main(String args[])
    {
		
        // Input the number of test cases you want to run
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
		//Node root=null;
        while (t > 0)
        {
            HashMap<Integer, Node> m = new HashMap<Integer, Node> ();
            int n = sc.nextInt();
            Node root=null;
            while (n > 0)
            {
                int n1 = sc.nextInt();
                int n2 = sc.nextInt();
                char lr = sc.next().charAt(0);
                //  cout << n1 << " " << n2 << " " << (char)lr << endl;
                Node parent = m.get(n1);
                if (parent == null)
                {
                    parent = new Node(n1);
                    m.put(n1, parent);
                    if (root == null)
                        root = parent;
                }
                Node child = new Node(n2);
                if (lr == 'L')
                    parent.left = child;
                else
                    parent.right = child;
                m.put(n2, child);
                n--;
            }
		
            Level_Order_Traverse g = new Level_Order_Traverse();
            g.levelOrder(root);
			System.out.println();
            t--;
			
        }
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
/*class Node
{
    int data;
    Node left, right;
    Node(int item)
    {
        data = item;
        left = right = null;
    }
}*/
class Level_Order_Traverse
{
    static void levelOrder(Node node) 
    {
        // Your code here
        if(node == null){return;}
        Queue<Node> q = new LinkedList<Node>();
        q.add(node);
        q.add(null);
        while(q.size()!=1){
            Node s = q.poll();
            if(s!=null){
            System.out.print(s.data+" ");
            }
            else if(s==null){
               System.out.print("$ ");
               q.add(null);
               continue;
            }
            
            if(s.left!=null){q.add(s.left);}
            if(s.right!=null){q.add(s.right);}
            
        }
        System.out.print("$");
    }
}
