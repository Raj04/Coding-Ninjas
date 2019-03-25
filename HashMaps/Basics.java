import java.util.*;
import java.lang.*;

class GFG {
    
	public static void main (String[] args) {
	   
	   Map<String,Integer> mp=new HashMap<>();
	   mp.put("abc",1);
	   mp.put("def",2);
	   mp.put("ghi",3);
	   mp.put("jkl",4);
	   
	   System.out.println(mp.get("jkl"));//to get the value
	   System.out.println(mp.isEmpty());//checking the hashmap is empty or TypeNotPresentException
	   System.out.println("The actual hashmap size "+ mp.size());//return the size
	   System.out.println(mp.remove("jkl"));//remove returns the deleted key
	   System.out.println("The actual hashmap size after deleting one key "+ mp.size());//return the size
	   
	}
}
