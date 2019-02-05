
import java.lang.Math.*;

public class solution {

	public static int convertStringToInt(String input){
		// Write your code here
      	if(input.length()==1){
          return Integer.parseInt(input);
        }
		char []arr=input.toCharArray();
        char arr1[]=new char[arr.length-1];
      	for(int i=0;i<arr.length-1;i++){
          arr1[i]=arr[i];
        }
        String s=new String(arr1);
      	int number1=convertStringToInt(s);
      	int number2=Integer.parseInt(Character.toString((input.toCharArray()[input.length()-1])));
      	int number3=number1*10+number2;
      	return number3;
	}
}
