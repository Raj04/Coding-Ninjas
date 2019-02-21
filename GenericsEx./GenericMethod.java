
/*package whatever //do not write package name here */

import java.io.*;


class PrintArray{
    
    //the method which can return any data type 
    //whatever we pass 
    public <T> void print(T value){
        
        System.out.println(value);
    }
}

class GFG {
	public static void main (String[] args) {
		PrintArray p=new PrintArray();
	    p.print(2);
	    p.print("raj");
	}
}
