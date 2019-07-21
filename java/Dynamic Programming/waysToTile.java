
//https://practice.geeksforgeeks.org/problems/ways-to-tile-a-floor/0/?ref=self 
/*package whatever //do not write package name here */
import java.math.*;
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static BigInteger ways(BigInteger[] tiles, int w){
       
          tiles[1] = BigInteger.valueOf(1);
          tiles[2] = BigInteger.valueOf(2);
        
        // tiles[w] = ways(tiles,w-1) + ways(tiles,w-2); //(order of placing the tiles matter in calculating sum so...can't use the method used in waysToGetSum.java)
        // return tiles;
        for(int i = 3;i<=w;i++){
            tiles[i] = tiles[i-1].add(tiles[i-2]);
        }
        return tiles[w];
        
    }
	public static void main (String[] args) throws IOException {
		//code
		int t,w;
		BufferedReader br = new BufferedReader( 
                              new InputStreamReader(System.in)); 
  
        //StringTokenizer st = new StringTokenizer(br.readLine());
		t = Integer.parseInt(br.readLine());
		while(t>0){
		    w = Integer.parseInt(br.readLine());
		    w = Integer.valueOf(w);
		    BigInteger[] tiles = new BigInteger[w+1];
		    System.out.println( ways(tiles,w));
		    t--;
		}
	}
}
