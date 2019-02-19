
import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.next();
		System.out.println(solution.replace(input));
	}
}
class solution {

	public static String replace(String input){
	
      if(input.length()==1){
          //System.out.println(input);
        return input;
      }
      String s1=replace(input.substring(1));
      String actual="";
      if(input.charAt(0)=='p' && s1.charAt(0)=='i'){
          actual="3.14"+s1.substring(1);
        }
        else{
          actual=input.charAt(0)+s1;
        }
        return actual;
      }
      
	}
  
