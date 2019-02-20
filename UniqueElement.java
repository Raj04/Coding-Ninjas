
/*package whatever //do not write package name here */

import java.util.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		int arr[]={2,3,1,6,3,6,2};
		System.out.println(naive(arr));
	}
	
	//arr={2,2,3,3,6,6,7};
	//arr={1,2,2,3,3,6,6};
	public static int naive(int arr[]){
	    Arrays.sort(arr);
	    int i=0;
	    System.out.println("the length of array is "+arr.length);
	    while(i<arr.length-1){
	       // System.out.println("the elements are "+arr[i+1]);
	        if(arr[i]!=arr[i+1]){
	            return arr[i];
	        }
	        i=i+2;
	    }
	    return arr[i];
	}
}
