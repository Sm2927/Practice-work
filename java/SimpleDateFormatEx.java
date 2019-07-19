//https://www.geeksforgeeks.org/formatted-output-in-java/
// Java program to demonstrate working of SimpleDateFormat 
import java.text.ParseException; 
import java.text.SimpleDateFormat; 
import java.util.Date; 

class Formatter3 
{ 
public static void main(String args[]) throws ParseException 
{ 
	// Formatting as per given pattern in the argument 
	SimpleDateFormat ft = new SimpleDateFormat("dd/MM/yyyy"); 
	String str = ft.format(new Date()); 
	System.out.println("Formatted Date : " + str); 
    System.out.println(new Date()); 
// 	// parsing a given String 
	str = "02/01/1995"; 
	ft = new SimpleDateFormat("MM/dd/yyyy"); 
	Date date = ft.parse(str); 

// 	// this will print the date as per parsed string 
	System.out.println("Parsed Date : " + date); 
} 
} 
