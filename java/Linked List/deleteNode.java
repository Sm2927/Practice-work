//https://practice.geeksforgeeks.org/problems/java-collections-set-7-linkedlist/1
//https://stackoverflow.com/questions/41611228/what-is-the-purpose-of-creating-static-object-in-java
{
//Initial Template for Java
import java.io.*;
import java.util.Scanner; 
class Node {
    int data;
    Node next;
    Node(int d) {
        this.data = d;
        this.next = null;
    }
}
 class LinkedList{
    public static Node cur2=null;
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            Node head=null;
            Node cur=null;
        int n=sc.nextInt();
        int p=sc.nextInt();
        cur=null;
        for(int i=0;i<n;i++)
        {
            int d=sc.nextInt();
            Node ptr=new Node(d);
            if(head==null)
            {
                head=ptr;
                cur=ptr;
            }
            else
            {
                cur.next=ptr;
                cur=ptr;
            }
        }
        cur2=head;
        while(p-->0)
        {
            cur2=cur2.next;
        }
        GfG g=new GfG();
        g.deleteNode(cur2);
        while(head!=null)
        {
            System.out.print(head.data+" ");
            head=head.next;
        }
        System.out.println();
        }
    }
}
//Position this line where user code will be pasted.
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class GfG{
    void deleteNode(Node node) {
        //Add your code here
        if(node== null){return;}
        int d;
        while(node.next.next != null){
            d = node.next.data;
            node.data = d;
            node = node.next;
        }
    // System.out.println("ch "+ node.data);
    node.data = node.next.data;
    node.next = null;
 
    }
}
