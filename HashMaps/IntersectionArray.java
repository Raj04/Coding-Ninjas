import java.util.*;

public class Intersection{
	
	public static void intersection(int[] arr1, int[] arr2){
		/* Your class should be named Intersection
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Print output and don't return it.
	 	 * Taking input is handled automatically.
  		 */
        if(arr1.length==0 || arr2.length==0){
            return 0;
        }
        Map<Integer,Boolean> mp=new HashMap<>();
        for(int i=0;i<arr1.length;i++){
            mp.put(arr1[i],true);
        }
        for(int i=0;i<arr2.length;i++){
            if(mp.containsKey(arr2[i])){
                System.out.println(arr2[i]);
                
            }
            
        }
    } 
}
