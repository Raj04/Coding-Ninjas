// A Java program to convert an ArrayList to arr[] 
import java.io.*; 
import java.util.List; 
import java.util.ArrayList; 

class GFG 
{ 
	public static void main(String[] args) 
	{ 
		List<Integer> al = new ArrayList<Integer>(); 
		al.add(10); 
		al.add(20); 
		al.add(30); 
		al.add(40); 
        
        //toArray() is used but it returns the object type array which is not an Integer here
        Object obj[]=al.toArray(); 
        for(Object o:obj){
            System.out.println(o);
        }
      //using get() also we can convert an arraylist values to an array 
        

// 		Integer[] arr = new Integer[al.size()+2]; 
// 		arr = al.toArray(arr); //the use of passing the array is to tell 
// 		                        //about the type of the array //it is going to return and accepts the array
// 		for (Integer x : arr) 
// 			System.out.print(x + " "); 
	} 
} 
