

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
import java.lang.Math;

class solution {

	// Return a string array that contains all the possible strings
	public static String[] keypad(int n){
		// Write your code here
		
      if(n<=1){
        String s[]={""};
        return s;
      }
      String prev[]=keypad(n/10);
      String actual[]=new String[(int)Math.pow(4.00,count(n))];
      //System.out.println(actual.length);
      String helper=setOfCharacter(n%10);
      int k=0;
      
      /*for(int i=0;i<prev.length;i++){
        for(int j=0;j<helper.length();j++){
          actual[k]=prev[i]+helper.charAt(j);
          //System.out.println(prev[i]);
          k++;
        }
      }*/
      for(int j=0;j<helper.length();j++){
          for(int i=0;i<prev.length;i++){
              actual[k]=prev[i]+helper.charAt(j);
              k++;
            }
          //System.out.println(prev[i]);
        //  System.out.println(helper.charAt(j));
      }
      int count=0;
      for(int i=0;i<actual.length;i++){
        if(actual[i]==null){
          count++;
        }
      }
      String newString[]=new String[actual.length-count];
      for(int i=0;i<actual.length;i++){
        if(actual[i]!=null){
	        newString[i]=actual[i];
      	}
      }
      return newString;
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
         	
        case 7:	return "pqrs";
         	
        case 8:	return "tuv";
			
        case 9:	return "wxyz";
        
       default:break;
     }
     return ""; 
    }
}
