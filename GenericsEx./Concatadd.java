/*package whatever //do not write package name here */

//program which adds an integer and concatenate strings using same methods
//code doesn't work as we cannot apply + operator directly on generic values


import java.util.*;

class Pair<T>{
    
    T first;
    T second;
    Pair(T first, T second){
        this.first=first;
        this.second=second;
        System.out.println(this.first);
        System.out.println(this.second);
    }
    public void addWithConcat(){
        System.out.println(first+second);
    } 
}

class GFG {
	public static void main (String[] args) {
		Pair<Integer> p=new Pair<Integer>(1,3);
	 //   Pair<String> p1=new Pair<String>("abc","def");
	   // System.out.println();
	   p.addWithConcat();
	  // p1.addWithConcat();
	   // System.out.println(p1.addWithConcat());
	}
}
