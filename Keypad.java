
#pending with error

import java.lang.Math;


import java.util.Scanner;

public class runner {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int input = s.nextInt();
		String output[] = solution.keypad(input);
		for(int i = 0; i < output.length; i++) {
			System.out.println(output[i]);
		}
	}
}

public class solution {

	// Return a string array that contains all the possible strings
	public static String[] keypad(int n){
		// Write your code here
		
      if(n==0){
        String s[]={""};
        return s;
      }
      String prev[]=keypad(n/10);
      String actual[]=new String[(int)Math.pow(3.00,count(n))];
      String helper=setOfCharacter(n);
      int k=0;
      for(int i=0;i<prev.length;i++){
        for(int j=0;j<helper.length();j++){
          actual[k]=prev[i]+helper.charAt(j);
        }
      }
      return actual;
    }                                       
  /*function to count no of integers*/
  	public static double count(int n){
      double count=0;
	   while(n>0){
	       count++;
	       n=n/10;
	   }
      return count;
    }
  /*returns the string corresponding to an integer*/
  	public static String setOfCharacter(int n){
     switch(n){
        case 2:	return "abc";
         		
        
        case 3:	return "def";
         		
        case 4:	return "ghi";
         	
        case 5:	return "jkl";
         	
        case 6:	return "mno";
         	
        case 7:	return "pqr";
         	
        case 8:	return "stuv";
			
        case 9:	return "wxyz";
        
       default:break;
     }
     return ""; 
    }
}
