import java.util.*;

public class solution {
	public static void printSubsets(int input[]) {
		List<List<Integer>> subsets = subsets(input);
    	Object[] objArray = subsets.toArray();
    	for(int index=0;index<objArray.length;index++){
          System.out.println(objArray[index]);
        }
    }
  	public static List<List<Integer>> subsets(int[] nums) {
		List<List<Integer>> list = new ArrayList<>();
		subsetsHelper(list, new ArrayList<>(), nums, 0);
		return list;
	}
 
	public static void subsetsHelper(List<List<Integer>> list , List<Integer> resultList, int [] nums, int start){
		list.add(new ArrayList<>(resultList));
		for(int i = start; i < nums.length; i++){
           // add element
			resultList.add(nums[i]);
           // Explore
			subsetsHelper(list, resultList, nums, i + 1);
           // remove
			resultList.remove(resultList.size() - 1);
		}
	}
}
