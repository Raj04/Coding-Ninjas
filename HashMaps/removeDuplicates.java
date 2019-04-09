package com;
import java.util.*;
import java.util.Map.Entry;

public class removeDupli {

	public static void main(String[] args) {

		Map<Integer,Boolean> mp=new HashMap<>();
		/*mp.put("1", true);
		mp.put("2", false);
		//iterating using keyset
		for(String keys:mp.keySet()){
			System.out.println(keys);
		}
		for(Boolean values:mp.values()){
			System.out.println(values);
		}
		//iterating using entry set
		
		
		for (Entry<String, Boolean> entry : mp.entrySet())  
            System.out.println("Key = " + entry.getKey() + 
                             ", Value = " + entry.getValue()); 
    	} 
	*/
		
		int a[]={1,8,9,8,5,5};
		ArrayList<Integer> arr=new ArrayList<>();
		for(int i=0;i<a.length;i++){
			if(mp.containsKey(a[i])){
				continue;
			}
			mp.put(a[i], true);
			arr.add(a[i]);
		}
		System.out.println(arr);
	}
}
