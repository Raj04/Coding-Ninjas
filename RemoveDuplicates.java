
import java.util.Scanner;

public class Main {
	
	static Scanner s = new Scanner(System.in);
	
	public static void main(String[] args) {
    	String input = s.next();
    	System.out.println(Solution.removeConsecutiveDuplicates(input));
    }
}


public class Solution {

	public static String removeConsecutiveDuplicates(String s) {
		// Write your code here
	
      	String str="";
      	if(s.length()==1){
          str=s;
          return str;
        }
	    String actual=removeConsecutiveDuplicates(s.substring(0,s.length()-1));
      	if(s.charAt(s.length()-1)==actual.charAt(actual.length()-1)){
          return actual;
        }
     	actual+=Character.toString(s.charAt(s.length()-1));
      	return actual;
	}

}
