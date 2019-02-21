/*package whatever //do not write package name here */

import java.util.*;

class Pair<T,V>{
    
    T first;
    V second;
    Pair(T first, V second){
        this.first=first;
        this.second=second;
    }
}

class GFG {
	public static void main (String[] args) {
		Pair<Integer,String> p=new Pair<>(1,"abc");
		System.out.println(p.first+" "+p.second);
	}
}
