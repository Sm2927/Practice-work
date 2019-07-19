
//https://practice.geeksforgeeks.org/problems/precise-fomat-java/1/?ref=self


/*This is a function problem.You only need to complete the function given below*/
//User function Template for Java
class Geeks{
    
    static void printInFormat(float a, float b){
        float result = a/b;
        System.out.format("%.7f", result);
        System.out.format(" %.3f\n", result);
        // Your code here to print upto 3 decimal places
        
    }    
    
}
