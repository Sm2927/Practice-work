
//https://www.geeksforgeeks.org/bitset-class-methods-java-examples-set-2/
// Java program explaining BitSet class methods 
// xor(), length(), clear() methods 
import java.util.*; 
public class NewClass 
{ 
	public static void main(String[] args) 
	{ 
		BitSet bs1 = new BitSet(); 
		BitSet bs2 = new BitSet(); 

		// assign values to bs1 using set() 
		bs1.set(7); 
		bs1.set(1); 
		bs1.set(2); 
		bs1.set(4); 
		bs1.set(3); 
		bs1.set(6); 

		// assign values to bs2 
		bs2.set(4); 
		bs2.set(6); 
		bs2.set(3); 
		bs2.set(9); 
		bs2.set(2); 

		// Printing the Bitsets 
		System.out.println("bs1 : " + bs1); 
		System.out.println("bs2 : " + bs2); 

		// use of length() method 
		System.out.println("use of length() : " + bs1.length()); 

		// use of xor() to perform logical Xor operation 
		bs1.xor(bs2); 
		System.out.println("Use of xor() : " + bs1); 
		bs2.xor(bs1); 
		System.out.println("Use of xor() : " + bs2); 

		// clear from index 2 to index 4 in bs1 
		bs2.clear(1, 2); 
		System.out.println("bs2 after clear method : " + bs2); 

		// clear complete Bitset 
		bs1.clear(); 
		System.out.println("bs1 after clear method : " + bs1); 
	} 
} 
