
//https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

{
import java.util.Scanner;
import java.lang.Integer;
import java.util.*;
//import java.lang.Math;
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
class Tree_Height
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
		
            Tree g = new Tree();
			
			System.out.println(g.height(root));
         t--;
			
        }
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
/* A Binary Tree node
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
 */
class Tree
{
    public static int max(int a, int b){
        return a>b?a:b;
    }
    int height(Node node) 
    {
         // Your code here
         if(node == null){return 0;}
         return (1+(max(height(node.left),height(node.right))));
    }   
}
