

import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		System.out.println(solution.addStars(input));
	}
}

public class solution {

	// Return the updated string
	public static String addStars(String s) {

      if(s.length()==1){
        return s;
      }
      char arr1[]=s.toCharArray();
      char arr2[]=new char[arr1.length-1];
      for(int index=0;index<arr1.length-1;index++){
        arr2[index]=arr1[index];
      }
      String temp2=new String(arr2);
      String actual=addStars(temp2);
      String s3=Character.toString(arr1[arr1.length-1]);
      if(actual.charAt(actual.length()-1)==arr1[arr1.length-1]){
        return actual+"*"+s3;
      }
      return actual+s3;
	}
}
