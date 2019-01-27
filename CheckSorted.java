package img;

public class CheckSorted {
	
	public static boolean sortedFalse(int []input){
		
		if(input.length<=1){
			return true;
		}
		int smallerInput[]=new int[input.length-1];
		for(int i=1;i<input.length;i++){
			smallerInput[i-1]=input[i];
		}
		boolean val=sortedFalse(smallerInput);
		if(val==true){
			if(input[0]<=input[1]){
				return true;
			}
		}
		return false;
	}
	public static void main(String[] args) {
		
		int []a={1,2,6,9,4};
		System.out.println(a[0]);
		System.out.println(sortedFalse(a));
		
	}

}
