import java.util.*;

public class Solution {

	public static void findPairsDifferenceK(int[] Arr, int k){
		
        HashMap<Integer,Boolean> Hashmap=new HashMap<>();
        /*for(int x:input){
            if(mp.containsKey(x+k)){
                System.out.println(x+" "+(x+k));
            }
            mp.put(x,true);
        }*/
        int i=0,j=0;
        for(i=0;i<Arr.length;i++) {
          Hashmap.put(Arr[i],true);
        }
        //int count=0;
        for(j=0;j<Arr.length;j++) {
          if(Hashmap.containsKey(Arr[j]+k) && Hashmap.get(Arr[j]+k)){
             System.out.println(Arr[j]+" "+(Arr[j]+k));
             //Hashmap.put(Arr[j],false);
          }
          /*if(Hashmap.containsKey(Arr[j]-k)&& Hashmap.get(Arr[j]-k)){
             System.out.println((Arr[j]-k)+" "+Arr[j]);
             Hashmap.put(Arr[j],false);
          }*/
        }
        //System.out.println(count);
        
	}
}
