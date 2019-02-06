import java.util.Scanner;

public class runner {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String input = s.nextLine();
		System.out.println(solution.removeX(input));
	}
}

public class solution {

	// Return the changed string
	public static String removeX(String input){
	
      if(input.length()==1){
        if(input.equals("x")){
          return "";
        }else{
          return input;
        }
      }
      char arr[]=input.toCharArray();
      char arr1[]=new char[arr.length-1];
      for(int index=0;index<arr.length-1;index++){
        arr1[index]=arr[index];
      }
      String s1=new String(arr1);
      String s=removeX(s1);
      String s2=Character.toString(arr[arr.length-1]);
      if(s2.equals("x")){
        s2="";
      	return s+s2;  
      }
      return s+s2;
	}
}
