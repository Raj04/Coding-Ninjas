
import java.util.*;

public class PairSum{	

	public static void pairSum(int[] arr, int num){
		
      //the below solution works only for distinct pairs
      /*
      	Arrays.sort(arr);
      	int start=0;
      	int end=arr.length-1;
      	while(start<=end){
          if(arr[start]+arr[end]==num){
            System.out.println(arr[start]+" "+arr[end]);
          }
          if(arr[start]+arr[end]<=num){
            start++;
          }else{
            end--;
          }
        }*/
      	//worst solution 
      	//in the question it is mentioned that print elements in the ordered way
      	//that's why we sorted elements
      	Arrays.sort(arr);
      	for(int i=0;i<arr.length;i++){
          for(int j=i+1;j<arr.length;j++){
            if(arr[i]+arr[j]==num){
              System.out.println(arr[i]+" "+arr[j]);
            }
          }
        }
	}
}
