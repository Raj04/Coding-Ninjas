import java.util.*;

public class Main {
	
	public static int[] takeInput() {
		Scanner s = new Scanner(System.in);
		int size = s.nextInt();
		int arr[] = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = s.nextInt();
		}
		return arr;
	}
	
	public static void main(String[] args) {
		int[] arr = takeInput();
		System.out.print(DuplicateInArray.duplicate(arr));
	}
}

public class DuplicateInArray{	

	public static int duplicate(int[] arr){  
		/* Your class should be named DuplicateInArray
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
      	Arrays.sort(arr);
      	int i=0;
      	while(i<arr.length-1){
         	if(arr[i]==arr[i+1]){
              return arr[i];
            }
          	i++;
        }
      	return -1;
	}
}
