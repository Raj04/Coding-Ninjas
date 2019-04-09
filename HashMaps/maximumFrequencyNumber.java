import java.util.*;

public class Solution {

	public static int maxFrequencyNumber(int[] arr){
		
        if(arr.length==1){
            return arr[0];
        }
        
        Map<Integer,Integer> mp=new HashMap<>();
        //ArrayList<Integer> list=new ArrayList<>();
        int max=-1;
        for(int i=0;i<arr.length;i++){
             if(mp.containsKey(arr[i])){
                 mp.put(arr[i],mp.get(arr[i])+1);
                 continue;
             }
            mp.put(arr[i],1);
        }
        
        int key=0;
        for(Map.Entry<Integer,Integer> entry : mp.entrySet()){
            if(entry.getValue()>max){
                max=entry.getValue();
                key=entry.getKey();
            }
        }
        return key; 
        
	}
}
