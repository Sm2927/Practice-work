{
import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0){
		    
		    int m = sc.nextInt();
		    
		    DynamicProgramming obj = new DynamicProgramming();
		    
		    System.out.println(obj.countWays(m));
		    
		}
		
	}
}

}
/*This is a function problem.You only need to complete the function given below*/
class DynamicProgramming{
    
    // function to find number of ways 
    Long countWays(int m){
        Long[] ways = new Long[m+1];
        // ways[0] = 0;
        Arrays.fill(ways, Long.valueOf(0));
        ways[0] = Long.valueOf(1);
        ways[1] = Long.valueOf(1);
        for(int i=2;i<=m;i++){
            ways[i] = ways[i-1];
        }
        for(int i=2;i<=m;i++){
            ways[i] += ways[i-2];
        }
        // your code here
        // for(int i=0;i<=m;i++){
        //     System.out.print(ways[i]+" ");
        // }
        return ways[m];
    }    
    
    
}
