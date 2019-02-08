import java.util.Scanner;

public class runner {
	static Scanner s = new Scanner(System.in);
	public static int[] takeInput() {
		int size = s.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s.nextInt();
		}
		return arr;
	}
	
	public static void main(String[] args) {
		int[] input = takeInput();
		int element = s.nextInt();
		System.out.println(solution.binarySearch(input, element));
	}
}


public class solution {
	
		
     public static int binarySearch(int input[], int element){
		
       return indexFind(input,element,0,input.length-1);
	}
  	public static int indexFind(int input[],int element,int start,int end){
     	
      int mid=(start+end)/2;
      if(start<end){
     	 if(input[mid]==element){
        	return mid;		
         }
        if(input[mid]<element){
          return indexFind(input,element,mid+1,end);
        }
        else if(input[mid]>element){
          return indexFind(input,element,start,mid-1);
        }
      }
      return -1;
	}
}
