
import java.util.Scanner;

public class Runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.next();
		char c1 = s.next().charAt(0);
		char c2 = s.next().charAt(0);
		System.out.println(Solution.replaceCharacter(input, c1, c2));
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
