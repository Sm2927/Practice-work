//https://practice.geeksforgeeks.org/problems/bitwise-operators-java/1/?ref=self
//User function Template for Java
// Function to perform bitwise manipulations
// a, b and c are input integers
class Geeks{
    static void bitWiseOp(int a, int b, int c){
        System.out.println( a^a );
        int e = c^b ;
        System.out.println(e);
        System.out.println(a&b);
        System.out.println(c|(a^a) );
        System.out.println(~e);
        // Your code here
        
    }
}
