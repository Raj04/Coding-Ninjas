//run on https://ide.geeksforgeeks.org/
import java.util.*;

public class Solution {

	public static int[] allIndexes(int input[], int x) {
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
      	ArrayList<Integer> arr=	findAll(input,x,0,input.length-1);
      	int actual[]=new int[arr.size()];
      	for(int i=0;i<actual.length;i++){
          actual[i]=arr.get(i);
          System.out.println(actual[i]);
        }
      	return actual;
	}
  	public static ArrayList<Integer> findAll(int input[],int x,int p,int r){
     
      if(p==r){
        ArrayList<Integer> arr=new ArrayList<Integer>();
        if(input[0]==x){
          arr.add(0);
        }
        return arr;
      }
      ArrayList<Integer> arr1=findAll(input,x,p,r-1);
      if(input[r]==x){
        arr1.add(r);
      }
      return arr1;
    }
}

class Runner {
	
	static Scanner s = new Scanner(System.in);
	
	public static int[] takeInput(){
		int size = s.nextInt();
		int[] input = new int[size];
		for(int i = 0; i < size; i++){
			input[i] = s.nextInt();
		}
		return input;
	}
	
	public static void main(String[] args) {
		int[] input = takeInput();
		int x = s.nextInt();
		int output[] = Solution.allIndexes(input, x);
		for(int i = 0; i < output.length; i++) {
			System.out.print(output[i] + " ");
		}
	}
}
