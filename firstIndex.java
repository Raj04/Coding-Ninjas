class Solution {

	public static int firstIndex(int input[], int x) {
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
		if(input.length<=1){
          if(input[0]==x){
            return 0;
          }else{
            return -1;
          }
        }
      	int smallArray[]=new int[input.length-1];
      	for(int i=0;i<input.length-1;i++){
          smallArray[i]=input[i];
        }
      	int val=firstIndex(smallArray,x);
     	if(val==-1){
          if(input[input.length-1]==x){
            return input.length-1;
          }
        }
        return val;  
    }
}
