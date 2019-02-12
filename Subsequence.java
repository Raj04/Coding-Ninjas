
#pending
import java.io.*;
import java.lang.*;

class GFG {
    
    public static String[] subSequence(String str){
        if(str.length()==0){
            String ans[]={""};
            return ans;
        }
        String s1[]=subSequence(str.substring(1));
        String s[]=new String[2*s1.length];
        for(int i=0;i<s1.length;i++){
            s[i]=s1[i];
        }
        for(int i=0;i<s1.length;i++){
            s[i+s1.length]=str.charAt(0)+s1[i];
        }
        return s;
    } 
	public static void main (String[] args) {
	   
	   String arr[]=subSequence("abc");
	   for(int i=0;i<arr.length;i++){
	       System.out.println(arr[i]);
	   } 
	}
}
