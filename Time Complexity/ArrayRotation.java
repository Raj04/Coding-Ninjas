import java.util.*;

public class CheckRotation {	

	public static int arrayRotateCheck(int[] arr){
	
    //for clockwise roatated array only
     //the no of times array has been rotated is the array index
     //of the minimumm element
      	
		int min=arr[0],index=0;
      	for(int i=1;i<arr.length;i++){
          if(min>arr[i]){
          	  min=arr[i];
            index=i;
          }
        }
      	return index;
	}
}
