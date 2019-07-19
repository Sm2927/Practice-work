/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		//System.out.println("GfG!");
		HashMap<Integer, String> m = new HashMap<Integer, String>();
		m.put(1,"Sovna");
		m.put(2,"Gudli");
		m.put(3,"Sovna");
		m.put(4,"Sanat");
		m.put(5,"Sunanda");
		for(Map.Entry a : m.entrySet()){
		    System.out.println(a.getKey() + " " + a.getValue());
		}
		HashMap<Integer, String> n = new HashMap<Integer, String>(m);
		for(Map.Entry a : n.entrySet()){
		    System.out.println(a.getKey() + " " + a.getValue());
		}
// 		SortedMap<Integer, String> 
//                 sotreemap = new TreeMap<Integer, String>( 
//                     Collections.reverseOrder()); 
  
//             // Populating tree map 
//             sotreemap.put(1, "one"); 
//             sotreemap.put(2, "two"); 
//             sotreemap.put(3, "three"); 
//             sotreemap.put(4, "four"); 
//             sotreemap.put(5, "five"); 
  
//             // Pritnig the TreeMap 
//             System.out.println("SortedTreeMap: " + sotreemap); 
		
			SortedMap<Integer, String> sm = new TreeMap<Integer, String>(
			    Collections.reverseOrder());
			sm.put(1,"Sovna");
		    sm.put(2,"Gudli");
		    sm.put(3,"Sovna");
		    sm.put(4,"Sanat");
		    sm.put(5,"Sunanda");
		for(Map.Entry a : sm.entrySet()){
		    System.out.println(a.getKey() + " " + a.getValue());
		}
		System.out.println("SortedMap: " + sm);
	}
}
